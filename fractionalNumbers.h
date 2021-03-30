#include "Header.h"
class Numbers
{
public:
	long int m_numerator;
	unsigned short int m_denominator;

};
class Fraction
{
private:
	Numbers m_Num;
	
	friend Fraction operator-(Fraction, Fraction);
	friend Fraction operator/(Fraction, Fraction);
	

public:

	Fraction(long int, unsigned short int);
	Fraction();

	
	int getNumerator();
	int getDenominator();
	Fraction& setNumerator(int);
	Fraction& setDenominator(int);
	Fraction& show();
	friend void show(Fraction);
};

