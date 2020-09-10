#include <iostream>
#include <string>

using namespace std;

int main(){

	//C-style casts
	int n1 = 3;
	int n2 = 2;
	double d = (double)n1 / n2;
	double d2 = double(n1) / n2;

	cout << d << endl;

	//static_cast
	int n{ 75 };
	cout << static_cast<char>(n) << endl; // in ky tu voi ma ASCII 75

	char ch{ 'K' };
	cout << static_cast<int>(ch) << endl; // in ma ASCII cua ky tu 'K'

	int n11 = 3;
	int n22 = 2;
	double d11 = static_cast<double>(n11) / n22;

	cout << d11 << endl;
	system("Pause");
	return 0;
}