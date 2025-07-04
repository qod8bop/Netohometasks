#include <iostream>
#include <string>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	std::string print()
	{
		std::string a = std::to_string(numerator_);
		std::string b = "/";
		std::string c = std::to_string(denominator_);
		std::string out = a + b + c;
		return out;
	}

	void reduce()
	{
		int SmallOne = denominator_;
		int BigOne = numerator_;
		int storage;
		int mod;
		while (true)
		{
			mod = BigOne % SmallOne;
			if(mod == 0)
			{
				break;
			}
			else 
			{
				BigOne = SmallOne;
				SmallOne = mod;
				storage = mod;
			}
		}
		denominator_ /= storage;
		numerator_ /= storage;
	}


	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	int cdenom(Fraction other) { // числитель после приведения к общему знаменателю
		return numerator_ * other.denominator_;
	}

	bool operator == (Fraction other) { return cdenom(other) == other.cdenom(*this); }
	bool operator != (Fraction other) { return !(*this == other); }

	bool operator > (Fraction other) { return cdenom(other) > other.cdenom(*this); }
	bool operator < (Fraction other) { return other > *this; }
	bool operator >= (Fraction other) { return !(*this < other); }
	bool operator <= (Fraction other) { return !(*this > other); }

	Fraction operator + (Fraction other) { return Fraction((cdenom(other) + other.cdenom(*this)), denominator_ * other.denominator_); }
	Fraction operator - (Fraction other) { return Fraction((cdenom(other) - other.cdenom(*this)), denominator_ * other.denominator_); }
	Fraction operator * (Fraction other) { return Fraction(numerator_ * other.numerator_, denominator_*other.denominator_); }
	Fraction operator / (Fraction other) { return Fraction(numerator_ * other.denominator_, denominator_* other.numerator_); }
	
	Fraction& operator - ()
	{
		numerator_ = -numerator_;
			return *this;
	}


	Fraction& operator --() 
	{
		numerator_ -= denominator_;
		return *this;
	}


	Fraction operator --(int)
	{
		Fraction temp(this->numerator_, this->denominator_);
		--(*this);
		return temp;
	}




	Fraction& operator ++()
	{
		numerator_ += denominator_;
		return *this;
	}


	Fraction operator ++(int)
	{
		Fraction temp(this->numerator_, this->denominator_);
		++(*this);
		return temp;
	}

};

int main() {
	int top;
	int bottom;

	std::cout << "Введите числитель дроби 1: ";
	std::cin >> top;
	std::cout << std::endl;

	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> bottom;
	std::cout << std::endl;
	Fraction F1 = Fraction(top, bottom);
	std::cout << "F1 = "<< F1.print();;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Введите числитель дроби 2: ";
	std::cin >> top;
	std::cout << std::endl;

	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> bottom;
	std::cout << std::endl;
	Fraction F2 = Fraction(top, bottom);
	std::cout << "F2 = "<< F2.print();;
	std::cout << std::endl;
	std::cout << std::endl;

	Fraction F3 = F1 + F2;
	F3.reduce();
	std::cout << F1.print() << " + " << F2.print() << " = " << F3.print() << std::endl;
	F3 = F1 - F2;
	std::cout << F1.print() << " - " << F2.print() << " = " << F3.print() << std::endl;
	F3 = F1 * F2;
	F3.reduce();
	std::cout << F1.print() << " * " << F2.print() << " = " << F3.print() << std::endl;
	F3 = F1 / F2;
	F3.reduce();
	std::cout << F1.print() << " / " << F2.print() << " = " << F3.print() << std::endl << std::endl;
	
	std::cout << "++" << F1.print() << " * " << F2.print() << " = ";
	F3 = ++F1 * F2;
	F3.reduce();
	std::cout << F3.print() << std::endl;



	
	std::cout << "Значение дроби 1 = " << F1.print() << std::endl << std::endl;

	std::cout << F1.print() << "--" << " * " << F2.print() << " = ";
	F3 = F1-- * F2;
	F3.reduce();
	std::cout << F3.print() << std::endl ;

	std::cout << "Значение дроби 1 = " << F1.print() << std::endl << std::endl;;
	
	return 0;
}