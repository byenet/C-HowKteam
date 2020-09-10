#include <iostream>

using namespace std;


void callByReferences(int &y)	// y is a reference variable
{
	cout << "y = " << y << endl;

	y = 69;

	cout << "y = " << y << endl;
}	// y is destroyed here

void calculator(int x, int y, int &addOut, int &subOut)
{
	addOut = x + y;
	subOut = x - y;
}

void printValue(const int &value)	// value is a const reference
{
	// compile error: a const reference cannot have its value changed!
	//value = 69;

	cout << value << endl;
}

int main()
{
	int x(1);
	cout << "x = " << x << endl;

	callByReferences(x);

	cout << "x = " << x << endl;

	//-----------------------------------------------
	int a(6), b(9);
	int add, sub;

	// calculator will return the addOut and subOut in variables add and sub
	calculator(a, b, add, sub);

	cout << " a + b = " << add << endl;
	cout << " a - b = " << sub << endl;

	//-------------------------------------------------
	int x2(1);

	printValue(x2);	// argument is a variable
	printValue(5);	// argument is a const
	printValue(x2 + 5);	// argument is a expression

	system("Pause");

	return 0;
}