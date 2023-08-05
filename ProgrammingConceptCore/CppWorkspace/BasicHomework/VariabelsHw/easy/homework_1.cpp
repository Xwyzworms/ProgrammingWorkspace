
#include<iostream>
#include<climits>




int main() {

	int inp1 {12};
	int inp2 {3} ;

	//std::cin>>inp1>>inp2;
	
	if( (inp1 != 0 && inp2 != 0) && (inp1 < INT_MAX && inp2 < INT_MAX)) 
	{
		std::cout<<inp1 << " + " << inp2<< " = " << inp1 + inp2<<"  " <<std::endl;
		std::cout<<inp1 << " - " << inp2<< " = " << inp1 - inp2 <<"  "<<std::endl;
		std::cout<<inp1 << " / " << inp2<< " = " << inp1 / inp2 <<"  "<<std::endl;
		std::cout<<inp1 << " * " << inp2<< " = " << inp1 * inp2 <<"  "<<std::endl;

	};



	return 0;
}
