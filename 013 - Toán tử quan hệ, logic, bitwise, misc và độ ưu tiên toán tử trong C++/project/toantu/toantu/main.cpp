#include <iostream>
#include <iomanip>
using namespace std;

int sum(int a, int b)
{
	return a + b;
}

int main(){

	cout << "Enter an integer: ";
	int x;
	cin >> x;

	cout << "Enter another integer: ";
	int y;
	cin >> y;

	if (x == y)
		cout << x << " == " << y << "\n";
	if (x != y)
		cout << x << " != " << y << "\n";
	if (x > y)
		cout << x << " > " << y << "\n";
	if (x < y)
		cout << x << " < " << y << "\n";
	if (x >= y)
		cout << x << " >= " << y << "\n";
	if (x <= y)
		cout << x << " <= " << y << "\n";


	cout << "So sanh 2 so cham dong" << endl;
	double	d1{ 1.0 };
	double	d2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

	if (d1 == d2)
		cout << "d1 == d2" << "\n";
	else if (d1 > d2)
		cout << "d1 > d2" << "\n";
	else if (d1 < d2)
		cout << "d1 < d2" << "\n";

	cout << std::setprecision(20);	// show 20 digits
	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;

	cout << "Toan tu logic trong c++" << endl;
	cout << "Enter a number: ";
	int value;
	cin >> value;

	if (!value)
		cout << value << " is false" << endl;
	else
		cout << value << " is true" << endl;

	if ((value > 1) && (value < 100))
		cout << value << " is between 1 and 100" << endl;
	else
		cout << value << " is not between 1 and 100" << endl;

	if ((value == 1) || (value == 100))
		cout << value << " == 1 or " << value << " == 100" << endl;
	else
		cout << value << " != 1 or " << value << " != 100" << endl;


	int x2{ 6 }, y2{ 9 }, max;
	if (x2 > y2)
	{
		max = x2;
	}
	else
	{
		max = y2;
	}
	cout << "Max = " << max << endl;

	// Tuong duong voi
	max = (x2 > y2) ? x2 : y2;
	cout << "Max = " << max << endl;

	system("Pause");
	return 0;
}