#pragma once
#include "Header.h"
using namespace std;

Fraction::Fraction(long int numerator = 0, unsigned short int denominator = 1) :m_Num(numerator, denominator)
{
	assert(denominator != 0);
}
Fraction::Fraction()
{
	cin >> m_Num.m_numerator;
	cin >> m_Num.m_denominator;
}

Fraction& Fraction::setNumerator(int numerator)
{
	m_Num.m_numerator= numerator;
	return *this;
}

Fraction& Fraction::setDenominator(int denominator)
{
	m_Num.m_denominator = denominator;
	return *this;
}

int Fraction::getNumerator()
{
	return m_Num.m_numerator;
}
int Fraction::getDenominator()
{
	return m_Num.m_denominator;
}

Fraction& Fraction::show()
{
	std::cout << m_Num.m_numerator << "/" << m_Num.m_denominator<< "\n";
	return *this;
}

void show(Fraction number)
{
	std::cout << number.getNumerator() << "/" << number.getDenominator() << "\n";
}

Fraction operator-(Fraction firstFraction,Fraction secondFraction)
{
	return Fraction((firstFraction.m_Num.m_numerator * secondFraction.m_Num.m_denominator) - (secondFraction.m_Num.m_numerator * firstFraction.m_Num.m_denominator), 
					(firstFraction.m_Num.m_denominator * secondFraction.m_Num.m_denominator));
}

Fraction operator/(Fraction firstFraction, Fraction secondFraction)
{
	return Fraction(firstFraction.m_Num.m_numerator*secondFraction.m_Num.m_denominator, firstFraction.m_Num.m_denominator*secondFraction.m_Num.m_numerator);
}

Numbers::Numbers(long int numerator, unsigned short int denominator):m_numerator(numerator), m_denominator(denominator)
{}

Numbers::Numbers() {}