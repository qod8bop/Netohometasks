#include <iostream>
#include "Print_info.h"
#include "Basefig.h"
#include "Exceptions.h"

int main() {
	Figure* ptr = nullptr;
	try {
		Print_info(ptr);
	}
	catch (wrongsides& er) { er.what(); }
	catch (wronganglesTRI& er) { er.what(); } // почему при попытке передать в catch указатель, вместо ссылки, программа выдаёт ошибку?
	catch (wronganglesREC& er) { er.what(); }
	catch (WrongC& er) { er.what(); }
	catch (acnoteq& er) { er.what(); }
	catch (ACnoteq& er) { er.what(); }
	catch (ANGSnoteq& er) { er.what(); }
	catch (sidesnoteq& er) { er.what(); }
	catch (OneBadAngle& er) { er.what(); }
	catch (bdnoteq& er) { er.what(); }
	catch (BDnoteq& er) { er.what(); }

	std::cout << std::endl;

	return 0;
}