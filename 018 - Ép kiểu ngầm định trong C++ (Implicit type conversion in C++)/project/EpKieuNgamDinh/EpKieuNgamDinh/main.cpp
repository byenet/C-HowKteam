#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	int n = 500;
	char c = n;

	cout << static_cast<int>(c) << endl;

	//-----------------------------------------
	// chuyen doi ve kieu du lieu nho hon gay mat do chinh xac (ep kieu hep)
	// double value 0.123456789 has 9 significant digits, but float can only support about 7
	float f = 0.123456789;

	cout << setprecision(9) << f << endl; // std::setprecision defined in iomanip header

	// --------------------------------------------------
	// chuyen doi so cham dong sang 1 so nguyen se lam mat di phan thap phan
	double d = 1.5;
	int n2 = d;

	cout << n2 << endl;

	// --------------------------------------------------
	/* Do uu tien ep kieu
		1. long double (highest)
		2. double
		3. float
		4. unsigned long long
		5. long long
		6. unsigned long
		7. long
		8. unsigned int
		9. int (lowest)
	*/
	bool b(2);
	char c2(6);
	short s(9);

	// show the type of b + c + s
	cout << typeid(b + c2 + s).name() << " " << b + c2 + s << endl;

	short s2(1);
	int n3(2);
	double d2(1.0);

	// show the type of (s + d) * n
	cout << typeid((s2 + d2) * n3).name() << " " << (s2 + d2) * n3 << endl;

	system("Pause");
	return 0;
}