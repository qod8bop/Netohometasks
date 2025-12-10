#include <iostream>
#include <string>
#include <pqxx/pqxx>

class ClientManager {
private:
    std::string conn_string;

public:
    ClientManager() : conn_string("dbname=clients user=postgres password=postgres") {}

    // 1. Создать таблицы
    void createTables() {
        try {
            pqxx::connection conn(conn_string);
            pqxx::work tx(conn);


            tx.exec("CREATE TABLE IF NOT EXISTS clients ("
                "id SERIAL PRIMARY KEY,"
                "name VARCHAR(50),"
                "surname VARCHAR(50),"
                "email VARCHAR(100))");


            tx.exec("CREATE TABLE IF NOT EXISTS phones ("
                "id SERIAL PRIMARY KEY,"
                "client_id INT REFERENCES clients(id),"
                "phone VARCHAR(20))");

            tx.commit();


        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }

    // 2. Добавить клиента
    void addClient(const std::string& name, const std::string& surname, const std::string& email) {
        try {
            pqxx::connection conn(conn_string);
            pqxx::work tx(conn);

            tx.exec("INSERT INTO clients (name, surname, email) VALUES (" +
                tx.quote(name) + ", " + tx.quote(surname) + ", " + tx.quote(email) + ")");

            tx.commit();

        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }

    // 3. Добавить телефон
    void addPhone(int client_id, const std::string& phone) {
        try {
            pqxx::connection conn(conn_string);
            pqxx::work tx(conn);

            tx.exec("INSERT INTO phones (client_id, phone) VALUES (" +
                std::to_string(client_id) + ", " + tx.quote(phone) + ")");

            tx.commit();


        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }

    // 4. Изменить данные клиента
    void updateClient(int client_id, const std::string& name,
        const std::string& surname, const std::string& email) {
        try {
            pqxx::connection conn(conn_string);
            pqxx::work tx(conn);

            tx.exec("UPDATE clients SET name = " + tx.quote(name) +
                ", surname = " + tx.quote(surname) +
                ", email = " + tx.quote(email) +
                " WHERE id = " + std::to_string(client_id));

            tx.commit();


        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }

    // 5. Удалить телефон
    void deletePhone(int client_id, const std::string& phone) {
        try {
            pqxx::connection conn(conn_string);
            pqxx::work tx(conn);

            tx.exec("DELETE FROM phones WHERE client_id = " +
                std::to_string(client_id) + " AND phone = " + tx.quote(phone));

            tx.commit();

        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }

    // 6. Удалить клиента
    void deleteClient(int client_id) {
        try {
            pqxx::connection conn(conn_string);
            pqxx::work tx(conn);

            tx.exec("DELETE FROM phones WHERE client_id = " + std::to_string(client_id));
            tx.exec("DELETE FROM clients WHERE id = " + std::to_string(client_id));

            tx.commit();

        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }

    // 7. Найти клиента
    void findClient(const std::string& search) {
        try {
            pqxx::connection conn(conn_string);
            pqxx::work tx(conn);

            std::string query =
                "SELECT c.id, c.name, c.surname, c.email, p.phone "
                "FROM clients c "
                "LEFT JOIN phones p ON c.id = p.client_id "
                "WHERE c.name LIKE '%" + tx.esc(search) + "%' OR "
                "c.surname LIKE '%" + tx.esc(search) + "%' OR "
                "c.email LIKE '%" + tx.esc(search) + "%' OR "
                "p.phone LIKE '%" + tx.esc(search) + "%'";

            auto result = tx.query(query);

            std::cout << "\nРезультаты поиска по '" << search << "':" << std::endl;
            for (auto row : result) {
                std::cout << "ID: " << row[0].as<int>()
                    << ", Имя: " << row[1].as<std::string>()
                    << ", Фамилия: " << row[2].as<std::string>()
                    << ", Email: " << row[3].as<std::string>()
                    << ", Телефон: " << row[4].as<std::string>() << std::endl;
            }

        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
};

int main() {
    ClientManager manager;

    manager.createTables();

    manager.addClient("Иван", "Иванов", "ivan@mail.ru");
    manager.addClient("Петр", "Петров", "petr@mail.ru");


    manager.addPhone(1, "+79161234567");
    manager.addPhone(1, "+74951234567");
    manager.addPhone(2, "+79261234568");

    manager.findClient("Иван");

    manager.updateClient(1, "Иван", "Иванов", "ivan.new@mail.ru");

    manager.deletePhone(1, "+74951234567");

    manager.deleteClient(2);

    manager.findClient("mail.ru");

    return 0;
}