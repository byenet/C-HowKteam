#include <iostream>
#include <iomanip>

using namespace std;

int sum(int a, int b)
{
	return a + b;
}

int main(){

	int x = 9;
	int y = 6;

	cout << "int % int = " << x % y << "\n";
	cout << "int / int = " << x / y << "\n";
	cout << "double / int = " << (1.0 * x) / y << "\n";
	cout << "int / double = " << x / (1.0 * y) << "\n";
	cout << "double / double = " << (1.0 * x) / (1.0 * y) << "\n";
	cout << "double / int = " << static_cast<double>(x) / y << "\n";
	cout << "int / double = " << x / static_cast<double>(y) << "\n";
	cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << "\n";

	// Tien to
	int x2 = 69;
	int y2 = ++x2;	// x is now equal to 70, and 70 is assigned to y

	cout << x2 << endl;	// x = 70
	cout << y2 << endl;	// y = 70

	// Hau to
	int x3 = 69;
	int y3 = x3++;	// x is now equal to 70, and 69 is assigned to y

	cout << x3 << endl;	// x = 70
	cout << y3 << endl;	// y = 69

	// Toan tu gan
	int x4 = 9;
	int y4 = 9;

	x4 = x4 + 6; // x4 += 6
	cout << "x4 = x4 + 6 = " << x4 << endl;

	y4 += 6; // y4 = y4 + 6
	cout << "y += 6 = " << x << endl;

	int z4 = sum(x4, y4);
	cout << "Sum of x and y is " << z4 << endl;

	system("Pause");
	return 0;
}