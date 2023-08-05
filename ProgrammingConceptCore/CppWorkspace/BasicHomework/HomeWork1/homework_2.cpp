#include<iostream>
void printsolution1() {
	for(int i =0 ; i < 5; i++ ){

		for(int j = 0 ; j <= i ; j++) {
			std::cout<<"* ";
		}
		std::cout<<std::endl;
	}


}

void printsolution2(){
	// Only need to centered it  using spacing )

	for(int i =1 ; i<=5;i++) {

		for( int j =0 ; j< 2*i -1 ;j++) {
			std::cout<<"* ";
		}
		std::cout<<std::endl;
	}


}

void printsolution3()
{	
	std::cout<<"  *  "<<std::endl;
	std::cout<<" *** "<<std::endl;
	std::cout<<"*****"<<std::endl;
	std::cout<<" *** "<<std::endl;
	std::cout<<"  *  "<<std::endl;


}

void printsolution4() 
{

	std::cout<<"     1   "<<std::endl;
	std::cout<<"   2 3 2  "<<std::endl;
	std::cout<<"  3 4 5 4 3 "<<std::endl;
	std::cout<<" 4 5 6 7 6 5 4"<<std::endl;
	std::cout<<"5 6 7 8 9 8 7 6 5"<<std::endl;

}

int main() {

	printsolution1();
	printsolution2();
	printsolution3();
	printsolution4();

	return 0;
}
