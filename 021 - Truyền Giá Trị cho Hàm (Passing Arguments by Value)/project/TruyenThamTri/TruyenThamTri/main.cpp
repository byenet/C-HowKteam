#include <iostream>

using namespace std;

// This function takes no parameters
// It does not rely on the caller for anything
void sayHello()
{
	cout << "Hello Howkteam.com!" << endl;
}

// This function takes one integer parameter named x
// The caller will supply the value of x
void printValue(int x)
{
	cout << x << endl;
}

// This function has two integer parameters, one named x, and one named y
// The caller will supply the value of both x and y
int add(int x, int y)
{
	return x + y;
}

void callByValue(int y)
{
	cout << "y = " << y << endl;

	y = 69;

	cout << "y = " << y << endl;
}	// y is destroyed here


int main()
{
	sayHello();

	printValue(69); // 69 is the argument passed to function printValue()
	cout << add(6, 9) << endl; // 6 and 9 are the arguments passed to function add()


	int x(1);
	cout << "x = " << x << endl;

	callByValue(x);

	cout << "x = " << x << endl;

	system("Pause");
	return 0;
}