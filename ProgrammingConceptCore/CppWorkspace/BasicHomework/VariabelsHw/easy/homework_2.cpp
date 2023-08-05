#include<iostream>

int main() 
{


	std::string name = "Namae";
	int id = 112;
	float grade = 83.5;
	

	std::string name2 = "Namae_";
	int id2 = 115;
	float grade2 = 85.5;

	std::cout<<"What is student 1 name: ";
	std::cin>>name;
	
	std::cout<<"His id: ";
	std::cin>>id;

	std::cout<<"His math exam grade: ";
	std::cin>>grade;


	std::cout<<"What is student 2 name: ";
	std::cin>>name2;
	
	std::cout<<"His id: ";
	std::cin>>id2;

	std::cout<<"His math exam grade: ";
	std::cin>>grade2;

	
	std::cout<<"Students grades in math\n";
	std::cout<<name<<" (with id "<<id<<")"<<"got grade: "<<grade<<std::endl;
	std::cout<<name2<<" (with id "<<id2<<")"<<"got grade: "<<grade2<<std::endl;
	std::cout<<"Average grade is "<<(grade + grade2 ) / 2<<std::endl;
	return 0;


}
