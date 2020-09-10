#include <iostream>

using namespace std;

// Definition of function sayHello()
void sayHello() // sayHello() is the called function in this example
{
	cout << "Hello Howkteam.com!" << endl;
}

// int means the function returns an integer value to the caller
int return69()
{
	// this function returns an integer, so a return statement is needed
	return 69; // we're going to return integer value 69 back to the caller of this function
}

// Definition of function main()
int main()
{
	cout << "Starting main()" << endl;

	// Interrupt main() by making a function call to sayHello().  main() is the caller.
	sayHello();


	// -------------------------
	cout << return69() << endl; // prints 69

	int sum = return69() + 1;
	cout << sum << endl; // prints 70

	return69(); // okay: the value 69 is returned, but is discarded


	system("Pause");
	return 0;
}