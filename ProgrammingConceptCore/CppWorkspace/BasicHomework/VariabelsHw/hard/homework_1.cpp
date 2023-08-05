#include<iostream>

int main() 
{
	int num1 {115}, num2 {20} , num3 {301}, temp = -1;

	// Swap 3 elements without if 
	//std::cin>>num1>>num2>>num3;
	temp = num1 + num2 + num3;
	num1 = temp - (num3 + num1);
	num3 = temp - (num3 + num1);
	num2 = temp - (num3 + num1);

	std::cout<<num1<< " " << num2 << " " << num3<<"\n";

	return 0;
}
