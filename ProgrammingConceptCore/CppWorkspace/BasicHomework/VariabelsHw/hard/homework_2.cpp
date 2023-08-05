#include<iostream>
int main() 
{
	int a {10};
	int b { -1 };

	int eq_neg_one = 2*a+1;
	int eq_one = a*a;
	
	int isNegOne = (b / 2) + 1 ;
	int isNotNegOne = ( b / 2 );
	
	std::cout<<eq_neg_one * isNegOne + eq_one * isNotNegOne<<std::endl; // Basically do if else statment but with MAFS
	//
	return 0;

} 
