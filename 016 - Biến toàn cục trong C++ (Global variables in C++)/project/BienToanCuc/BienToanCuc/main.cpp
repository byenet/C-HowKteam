#include <iostream>
#include <iomanip>
using namespace std;

// Variables declared outside of a block are global variables
int g_x;			// global variable g_x
const int g_y(2);	// global variable g_y

void doSomething()
{
	// global variables can be seen and used everywhere in program
	g_x = 3;
	cout << g_y << "\n";
}

int main()
{
	doSomething();

	// global variables can be seen and used everywhere in program
	g_x = 5;
	cout << g_y << "\n";

	system("Pause");
	return 0;
}


// ----------------------------------------------

int value(6); // global variable

int main2()
{
	int value = 9; // hides the global variable value
	value++; // increments local value, not global value
	::value--; // decrements global value, not local value

	cout << "global value: " << ::value << "\n";
	cout << "local value: " << value << "\n";
	return 0;
} // local value is destroyed


// -----------------------------------------------------
// Tranh su dung bien toan cuc
// declare global variable
int g_nMode;

void doSomething2()
{
	g_nMode = 2; // set the global g_mode variable to 2
}

int main3()
{
	// note: this sets the global g_mode variable to 1.
	// It does not declare a local g_mode variable!
	g_nMode = 1;

	doSomething();

	// Programmer still expects g_mode to be 1
	// But doSomething changed it to 2!

	if (g_nMode == 1)
		cout << "Khong bi thay doi." << endl;
	else
		cout << "Bi thay doi." << endl;

	return 0;
}

