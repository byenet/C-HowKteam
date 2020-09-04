#include <iostream>
using namespace std;
#include <iomanip>	// for std::setprecision()

int main(){

	
	//kich thuoc kieu du lieu


	cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;
	cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
	cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;

	// C++11, may not be supported by your compiler
	cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl;
	cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl;

	cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
	cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
	cout << "long:\t\t" << sizeof(long) << " bytes" << endl;

	// C++11, may not be supported by your compiler
	cout << "long long:\t" << sizeof(long long) << " bytes" << endl;

	cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
	cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
	cout << "long double:\t" << sizeof(long double) << " bytes" << endl;

	// You can also use the sizeof operator on a variable name
	int n;
	cout << "n variable:\t" << sizeof(n) << " bytes" << endl;



	// so nguyen co dau
	// Khai bao khong tuong minh, thuong duoc su dung
	char c;
	short s;
	int n2;
	// Hoac khai bao tuong minh, su dung tu khoa signed
	signed char c2;
	signed short s2;
	signed int n4;

	//so nguyen khong dau
	// Su dung tu khoa unsigned
	unsigned char uc;
	unsigned short us;
	unsigned int un;


	// So cham dong
	// Definitions of floating point numbers
	float fVarName;
	double dVarName2;
	long double ldVarName3;

	// Initializations of floating point numbers
	float fVarName1{ 4.0f };  // 4.0 means floating point (f suffix means float)
	double dVarName3{ 4.0 }; // 4.0 means floating point (double by default)
	long double dVarName4{ 4.0L }; // 4.0 means floating point (L suffix means long double)
	int nVarName5{ 4 };            // 4 means integer

	//ky hieu khoa hoc
	// Initializations of floating point numbers
	double dVarName5{ 69000.0 };
	double dVarName6{ 6.9e4 };     // 6.9e4 is equal to 69000.0

	double dVarName7{ 0.00069 };
	double dVarName8{ 6.9E-4 };    // 6.9e-4 is equal to 0.00069


	// do chinh xac so cham dong
	cout << endl << "Do chinh xac dau cham dong" << endl;
	double d;
	d = 9.87654321;
	cout << d << endl;
	d = 987.654321;
	cout << d << endl;
	d = 987654.321;
	cout << d << endl;
	d = 9876543.21;
	cout << d << endl;
	d = 0.0000987654321;
	cout << d << endl;
	d = 1.23456789;
	cout << d << endl;


	cout << std::setprecision(20);		// Show 20 digits

	float	f{ 9.66666666666666666666f }; 	// Initializations
	cout << f << endl;

	double	d2{ 9.66666666666666666666 };	// Initializations
	cout << d2 << endl;


	float	f2{ 123456789.0f };

	cout << std::setprecision(9);	// Show 9 digits
	cout << f2 << endl;


	//Sai so dau cham dong 
	cout << endl << "Sai so dau cham dong" << endl;
	double d3{ 0.1 };
	cout << d3 << endl;			// use default cout precision of 6
	cout << std::setprecision(20);	// show 20 digits
	cout << d3 << endl;


	double	d4{ 1.0 };
	double	d5{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

	cout << std::setprecision(20);	// show 20 digits
	cout << d4 << endl;
	cout << d5 << endl;

	system("Pause");
	return 0;

}