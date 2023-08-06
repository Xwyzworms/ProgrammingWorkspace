#include<iostream>
#include<numeric>
#include<string>

class Fraction {
public:
	Fraction();
	Fraction(int numerator = 0, int denominator = 1);
	std::string CompareFraction(const Fraction fraction1);
	void DisplayFraction();
	
	Fraction AddFraction(const Fraction fraction1);
	Fraction SubtractFraction(const Fraction fraction1);
	Fraction MultiplyFraction(const Fraction fraction1);
	Fraction DivideFraction( const Fraction fraction1);	


	void SetFraction(int numerator, int denominator) 
	{
		this->numerator = numerator;
		this->denominator = denominator;
	}

	int GetNumerator() 
	{
		return this->numerator;
	}

	int GetDenominator() 
	{
		return this->denominator;
	}
private:
	int numerator;
	int denominator;
};

Fraction::Fraction() : Fraction(0,1){}
Fraction::Fraction(int num , int den) : numerator(num), denominator(den)
{};
Fraction Fraction::AddFraction(Fraction frac2)
{
	Fraction result{0,0};
	if(this->denominator != frac2.denominator) 
	{
		int multipliedDenominator = this->denominator * frac2.denominator;
		int frac1FinalNumerator = (multipliedDenominator / this->denominator) * this->numerator;
		int frac2FinalNumerator = (multipliedDenominator / frac2.denominator) * frac2.numerator;
		
		int finalResultNumerator = frac1FinalNumerator + frac2FinalNumerator;

		result.SetFraction(finalResultNumerator, multipliedDenominator);
	}
	else
	{
		int finalResultNumerator = this->numerator + frac2.numerator;

		result.SetFraction(finalResultNumerator, this->denominator);
	}
	return result;

}

Fraction Fraction::MultiplyFraction(Fraction frac) 
{
	Fraction result{0,0};
	int multiplyNumerator = this->numerator * frac.numerator;
	int multiplyDenominator= this->denominator * frac.denominator;

	result.SetFraction(multiplyNumerator, multiplyDenominator);

	return result;

}

Fraction Fraction::DivideFraction(Fraction frac) 
{
	Fraction result { 0, 0} ;
	int multiplyNumerator = this->numerator * frac.denominator;
	int multiplyDenominator = this->denominator * frac.numerator;

	result.SetFraction(multiplyNumerator, multiplyDenominator);

	return result;
}

Fraction Fraction::SubtractFraction(Fraction frac)
{
	// Not implementing the negative frac
	Fraction result{0,0};
	if(this->denominator != frac.denominator) 
	{
		int multipliedDenominator = this->denominator * frac.denominator;
		int finalFrac1Numerator = (multipliedDenominator / this->denominator ) * this->numerator;
		int finalFrac2Numerator = (multipliedDenominator / frac.denominator ) * frac.numerator;

		int finalNumerator = finalFrac1Numerator - finalFrac2Numerator;

		result.SetFraction(finalNumerator, multipliedDenominator);


	}
	else 
	{
	
		int finalNumerator = this->numerator - frac.numerator;
		result.SetFraction(finalNumerator, this->denominator);
	}

	return result;

}
std::string Fraction::CompareFraction(Fraction frac) 
{
	// Since using the Int i could not rely with division operation
	int thisNumerator = this->numerator;
	int thisDenominator = this->denominator;

	int fracNumerator = frac.numerator;
	int fracDenominator = frac.denominator;

	if(thisNumerator == fracNumerator && thisDenominator == fracDenominator) 
	{
		return "EQUAL";
	}
	else if(thisNumerator >= fracNumerator && thisDenominator<= fracDenominator  ) 
	{
		return "GREATER THAN";
	}
	else 
	{
		return "LESS THAN";
	}

}

void Fraction::DisplayFraction() 
{
	std::cout<<this->numerator<<"/"<<this->denominator<<std::endl;
}


int main() 
{
	Fraction frac1{5,2};
	Fraction frac2{5,4};

	Fraction result = frac1.AddFraction( frac2);
	std::cout<<result.GetNumerator()<< " " << result.GetDenominator() << std::endl;
	
	Fraction subtractResult = frac1.SubtractFraction( frac2);
	std::cout<<subtractResult.GetNumerator()<< " " << subtractResult.GetDenominator() << std::endl;
	
	Fraction multiplyResult = frac1.MultiplyFraction(frac2);
	std::cout<<multiplyResult.GetNumerator()<< " " << multiplyResult.GetDenominator() << std::endl;

	Fraction divResult = frac1.DivideFraction(frac2);
	std::cout<<divResult.GetNumerator()<< " " << divResult.GetDenominator() << std::endl;

	std::cout<<frac1.CompareFraction(frac2)<<std::endl;
	
	frac1.DisplayFraction();

}
