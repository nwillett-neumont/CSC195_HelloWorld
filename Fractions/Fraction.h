#pragma once
#include <iostream>

namespace mathlib {
	template<typename T = int>
	class Fraction
	{
	private:
		// Fraction attributes
		T numerator;
		T denominator;
		char dash = '-';
	public:
		// Fraction default constructor
		Fraction() 
		{
			setNumerator(1);
			setDenominator(1);
		}

		// Fraction constructor
		Fraction(T numerator, T denominator) {
			setNumerator(numerator);
			setDenominator(denominator);
		}

		// Fraction functions
		void simplify();

		double toDouble() const;

		// Fraction operator overloads
		// Arithmetic operators
		Fraction<> operator+(Fraction<>& fraction);

		Fraction<> operator-(Fraction<>& fraction);

		Fraction<> operator*(Fraction& fraction);

		Fraction<> operator/(Fraction<>& fraction);

		// Comparison operators
		bool operator==(Fraction<>& fraction);

		bool operator!=(Fraction<>& fraction);

		bool operator<(Fraction<>& fraction);

		bool operator<=(Fraction<>& fraction);

		bool operator>(Fraction<>& fraction);

		bool operator>=(Fraction<>& fraction);
		
		// Streaming operators
		friend std::ostream& operator<<(std::ostream& ostream, Fraction<> fraction);

		friend std::istream& operator>>(std::istream& istream, Fraction<>& fraction);

		// Fraction getter and setter functions
		T getNumerator() const
		{
			return numerator;
		}

		T getDenominator() const
		{
			return denominator;
		}

		void setNumerator(T numerator)
		{
			this->numerator = numerator;
		}

		void setDenominator(T denominator)
		{	
			if (denominator <= 0 )
			{
				this->denominator = 1;
			}
			else
			{
				this->denominator = denominator;
			}
		}
	};
}
