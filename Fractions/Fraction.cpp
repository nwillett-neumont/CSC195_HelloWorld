#include "Fraction.h"

// Static functions
static int greatestCommonDivisor(int numerator, int denominator) // Static function that finds the GCD of two values, referenced https://www.geeksforgeeks.org/program-to-find-gcd-or-hcf-of-two-numbers/
{	
	if (numerator == 0) return 0;

	if (numerator == denominator) return numerator;

	if (numerator > denominator) 
	{
		if (numerator % denominator == 0)
		{
			return denominator;
		}
		return greatestCommonDivisor(numerator - denominator, denominator);
	}

	if (denominator % numerator == 0) return numerator;

	return greatestCommonDivisor(numerator, denominator - numerator);
}

// Definitions for the two class functions
void mathlib::Fraction<>::simplify() // Simplifies the numerator and denominator by dividing them by a GCD from greatestCommonDivisor()
{
	int gcd = greatestCommonDivisor(this->getNumerator(), this->getDenominator());

	this->setNumerator(this->getNumerator() / gcd);
	this->setDenominator(this->getDenominator() / gcd);
}

double mathlib::Fraction<>::toDouble() const // Divides the numerator by the denominator and returns a double
{
	return static_cast<double>(this->getNumerator()) / this->getDenominator();
}

// Definitions for class operator overloads
// Arithmetic operators
mathlib::Fraction<> mathlib::Fraction<>::operator+(Fraction<>& fraction) const// Basically cross multiplies the numerator and denominators, so that they can be added, and adds them
{
	return Fraction((this->getNumerator() * fraction.getDenominator()) + (fraction.getNumerator() * this->getDenominator()), this->getDenominator()* fraction.getDenominator());
}

mathlib::Fraction<> mathlib::Fraction<>::operator-(Fraction<>& fraction) const // Basically cross multiplies the numerator and denominators, so that they can be subtracted, and subtracts them
{
	return Fraction<>((this->getNumerator() * fraction.getDenominator()) - (fraction.getNumerator() * this->getDenominator()), this->getDenominator() * fraction.getDenominator());
}

mathlib::Fraction<> mathlib::Fraction<>::operator*(Fraction<>& fraction) const // Multiplies straight accross
{
	return Fraction(this->getNumerator() * fraction.getNumerator(), this->getDenominator() * fraction.getDenominator());
}

mathlib::Fraction<> mathlib::Fraction<>::operator/(Fraction<>& fraction) const // Multiplies a fraction by the reciprocal of the other fraction
{
	return Fraction<>(this->getNumerator() * fraction.getDenominator(), this->getDenominator() * fraction.getNumerator());
}

// Comparison operators
bool mathlib::Fraction<>::operator==(Fraction<>& fraction) const // Ternary operator that returns whether or not the fractions are equal
{
	return (this->toDouble() == fraction.toDouble()) ? true : false;
}

bool mathlib::Fraction<>::operator!=(Fraction<>& fraction) const // Ternary operator that returns whether or not the fractions are not equal
{
	return (this->toDouble() != fraction.toDouble()) ? true : false;
}

bool mathlib::Fraction<>::operator<(Fraction<>& fraction) const // Ternary operator that returns whether or not a fraction is less than another fraction
{
	return (this->toDouble() < fraction.toDouble()) ? true : false;
}

bool mathlib::Fraction<>::operator<=(Fraction<>& fraction) const // Ternary operator that returns whether or not a fraction is less than or equal to another fraction
{
	return (this->toDouble() <= fraction.toDouble()) ? true : false;
}

bool mathlib::Fraction<>::operator>(Fraction<>& fraction) const // Ternary operator that returns whether or not a fraction is greater than another fraction
{
	return (this->toDouble() > fraction.toDouble()) ? true : false;
}

bool mathlib::Fraction<>::operator>=(Fraction<>& fraction) const // Ternary operator that returns whether or not a fraction is greater than or equal to another fraction
{
	return (this->toDouble() >= fraction.toDouble()) ? true : false;
}

// Streaming operators
std::ostream& mathlib::operator<<(std::ostream& ostream, Fraction<> fraction) // 
{
	return ostream << fraction.numerator << '/' << fraction.denominator;
}

std::istream& mathlib::operator>>(std::istream& istream, mathlib::Fraction<>& fraction)
{	
	return istream >> fraction.numerator >> fraction.dash >> fraction.denominator;
}