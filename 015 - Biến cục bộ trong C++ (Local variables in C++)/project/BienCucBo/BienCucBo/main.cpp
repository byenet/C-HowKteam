#include <iostream>
#include <iomanip>

using namespace std;

int main() // outer block
{
	int n(6); // n created and initialized here

	{ // begin nested block
		double d(9.0); // d created and initialized here
	} // d goes out of scope and is destroyed here

	  // d can not be used here because it was already destroyed!

	system("Pause");
	return 0;
} // n goes out of scope and is destroyed here

//---------------------------------------------------------------------

int main2()
{ // start outer block
	int x(6);

	{ // start nested block
		int y(9);
		// we can see both x and y from here
		cout << x << " + " << y << " = " << x + y;
	} // y destroyed here

	  // y can not be used here because it was already destroyed!

	return 0;
} // x is destroyed here

//-------------------------------------------------------

void someFunction()
{
	int value(4); // value defined here

				  // value can be seen and used here

} // value goes out of scope and is destroyed here

int main3()
{
	// value can not be seen or used inside this function.

	someFunction();

	// value still can not be seen or used inside this function.

	return 0;
}



// -----------------------------------------------


// add's x can only be seen/used within function add()
int add(int x, int y) // add's x is created here
{
	return x + y;
} // add's x is destroyed here

  // main's x can only be seen/used within function main()
int main4()
{
	int x = 6; // main's x is created here
	int y = 9;

	// the value from main's x is copied into add's x
	cout << add(x, y) << endl;

	return 0;
} // main's x is destroyed here


//---------------------------------------------------------

int main5()
{ // outer block
	int apples(6); // here's the outer block apples

	if (apples >= 6) // refers to outer block apples
	{ // nested block
		int apples; // hides previous variable named apples

					// apples now refers to the nested block apples
					// the outer block apples is temporarily hidden

		apples = 9; // this assigns value 10 to nested block apples, not outer block apples

		cout << apples << endl; // print value of nested block apples
	} // nested block apples destroyed

	  // apples now refers to the outer block apples again

	cout << apples << endl; // prints value of outer block apples

	return 0;
} // outer block apples destroyed


// ---------------------------------------

// Dinh nghia bien o pham vi nho nhat co the

int main6()
{
	// we're declaring y here because we need it in this outer block later
	int y(6);

	{
		int x;
		cin >> x;
		// if we declared y here, immediately before its actual first use...
		if (x == 9)
			y = 9;
	} // ... it would be destroyed here

	cout << y; // and we need y to exist here

	return 0;
}