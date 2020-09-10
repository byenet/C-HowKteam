#include <iostream>
using namespace std;

// Function prototype includes return type, name, parameters, and semicolon.
// No function body!
void printValue(int x);
int add(int x, int y);

int main()
{
	printValue(add(6, 9));

	system("Pause");
	return 0;
}

// even though the body of printValue() isn't defined until here
void printValue(int x)
{
	cout << x << endl;
}

// even though the body of add() isn't defined until here
int add(int x, int y)
{
	return x + y;
}