#include<iostream>

int main() {

	// Pointer to CONSTANT INTEGER ( Adjust the pointer but not the value its referenced ) 
	int x { 50 };
	int y { 100 };
	const int * ptr { &x };
	ptr = &y; // <-- You Can do this, but cannot change the value of y
	// *ptr = 43;  Try to uncommenct it
	std::cout<<ptr<<std::endl;

	// Pointer CONSTANT to INTEGER ( Adjust the value but not the pointer its point)
	
	int * const ptr2 { &x };
	// ptr2 = &y ; // <-- YOu Cannot do this , but you can change the value
	*ptr2 = 45;

	// The equivalent of reference
	const int & reference = x; // You cannot change the reference nor the pointer it points to
	const int * const refPtr = &x;

	// Uncomment below snippet code
	// reference = y;
	// reference = 5; 
	// reference = &y;
	
	// *refPtr = 12;
	// refPtr = &x; 
	//
	
	// A note of array pointer
	// If you declared pointer to an array, then your ptr will point into the first | &array[0] |
	int array[5] {2 ,4, 6, 8, 10};
	int *ptrArray { nullptr };

	ptrArray = array; // Equivalent with 
	ptrArray = &array[0]; 
	
	std::cout<<*ptrArray<<std::endl; // should output 2;
	std::cout<<*++ptrArray<<std::endl; // Should output 4 
	std::cout<<*--ptrArray<<std::endl; // Should output 2;
	
	ptrArray[4] = 100;
	std::cout<<ptrArray[4]<<std::endl; // Should output 4
	
	// Heres the loopDemonstration
	int sum { 0 };
	for(int i =0 ; i< 5;i++) {
		
		sum += *ptrArray;
		ptrArray ++; // Increment the bytes by 4 ( because of the arr type is INT )
	}

	std::cout<<"The Sum of bro: "<<sum<<std::endl;
	return 0;
}
