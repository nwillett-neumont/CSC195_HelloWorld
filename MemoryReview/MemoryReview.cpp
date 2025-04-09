#include <iostream>

struct Person
{
	char name[32];
	int id;
};

void square(int& input)
{
	input *= input;
}

void doubleValue(int* input)
{
	*input *= 2;
}

int main()
{
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	int i = 6;
	// declare a int reference and set it to the int variable above
	int& ri = i;
	// output the int variable
	std::cout << "i:" << i << std::endl;
	// set the int reference to some number
	ri = 4;
	// output the int variable
	std::cout << "i: " << i << std::endl;
	// what happened to the int variable when the reference was changed? (The reference of i points to the same memory location where i is stored, so changing the value of i's reference is really changing the value of i.)
	
	// output the address of the int variable
	std::cout << "i's address:" << &i << std::endl;
	// output the address of the int reference
	std::cout << "ri's address:" << &ri << std::endl;
	// are the addresses the same or different? (They are the same. ri points to the same location where i is stored.)

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	square(i);
	// output the int variable to the console
	std::cout << "i: " << i << std::endl;
	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the square function to take an int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable !!

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* pi = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	pi = &i;
	// output the value of the pointer
	std::cout << "pi: " << pi << std::endl;
	// what is this address that the pointer is pointing to? (00000053A42FF774, the same as i and the reference to i.)
	// output the value of the object the pointer is pointing to (dereference the pointer)
	std::cout << "*pi : " << *pi << std::endl;

	// ** POINTER PARAMETER **
	//
	// create a function above main() called doubleValue that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the double function with the pointer created in the POINTER VARIABLE section
	doubleValue(pi);
	// output the dereference pointer
	std::cout << "*pi: " << *pi << std::endl;
	// output the int variable created in the REFERENCE section
	std::cout << "i: " << i << std::endl;
	// did the int variable's value change when using the pointer? (Yes.)
}