#include<iostream>

class A 
{
	public:
		enum JustSomethingType {
			
			MET_A1 = 10,
			MET_A2,
			MET_A3
		};

		A();
		A(JustSomethingType type);
		JustSomethingType GetValue();
	
	private:
		JustSomethingType mMet;

};

A::A():A(JustSomethingType::MET_A1){}

A::A(JustSomethingType type):mMet(type){}

A::JustSomethingType A::GetValue() 
{
	return this->mMet;
}


int main() 
{
	A::JustSomethingType type = A::JustSomethingType::MET_A1;
	A myA = A(type);
	std::cout<<myA.GetValue()<<std::endl;


	return 0;

}
