#include <iostream>
using namespace std;

// include header file
#include "Constants.h"
using namespace constants;




#if 1
// Ham in nam sinh, voi tham so hang nYear
void printYearOfBirth(const int nYear)
{
	cout << "Year of birth: " << nYear << endl;
}

#endif tham so ham



int main(){

#if 0
	// Cach nay thong dung hon
	const double PI{ 3.14159 };

	// Cach nay it thong dung hon
	double const SPEED_OF_SOUND{ 343.2 };

	cout << "PI = " << PI << endl;

#endif Khai bao hang

#if 0
	// Sai vi hang so phai duoc khoi tao khi khai bao
	const double PI;

	// Khoi tao hang so PI
	const double PI{ 3.14159 };

	// Sai vi hang so khong the thay doi gia tri
	PI = 3;

#endif cac loi khoi tao va gan


#if 0

	int nHeight = 169;
	const int HEIGHT{ nHeight };

#endif co the Khoi tao gia tri tu bien

// Dung chi thi tien xu ly define

#if 0
	// Dinh nghia 1 macro bang chi thi tien xu ly #define (Khai bao o dau chuong trinh chu khong phai o day truoc ham main)
	#define YEAR_OF_BIRTH 2016

	cout << "Year of birth: " << YEAR_OF_BIRTH << endl;
#endif

// Hang so dung header file constants
#if 1
	cout << "PI = " << PI << endl;
	cout << "SPEED = " << constants::SPEED << endl;
#endif




	system("Pause");
	return 0;
}
