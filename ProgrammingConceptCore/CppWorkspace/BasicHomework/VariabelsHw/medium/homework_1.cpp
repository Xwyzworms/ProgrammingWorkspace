#include<iostream>

int main() {
	int num1 {7};
	int num2 {231};

	int temp = num1 + num2;
	num1 = temp - num1;
	num2 = temp - num2;

	std::cout<<num1<< " " << num2<<std::endl;

}
