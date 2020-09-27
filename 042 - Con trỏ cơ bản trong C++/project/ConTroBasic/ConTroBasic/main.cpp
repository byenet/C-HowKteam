#include <iostream>
using namespace std;

int main() {

	int x = 10;
	cout << x << '\n'; // print the value of variable x
	cout << &x << '\n'; // print the memory address of variable x
	cout << *&x << '\n'; /// print the value at the memory address of variable x

	*&x = 20;
	cout << x << '\n'; // print the value of variable x

	//-----------------------------------------------------------

	int *iPtr; // con tro den 1 dia chi chua gia tri so nguyen
	double *dPtr; // con tro den 1 dia chi chua gia tri so thuc

	int* iPtr2; // dung cu phap (nhung khong nen su dung)
	int * iPtr3; // dung cu phap (nhung khong nen su dung)

	int *iPtr4, *iPtr5; // khai bao 2 con tro den cac bien so nguyen

	int* iPtr6, iPtr7; // iPtr6 la 1 con tro, nhung iPtr7 chi la 1 bien so nguyen

	int* doSomething();

	//----------------------------------------------------------------

	int value = 10;
	int *ptr = &value; // khoi tao con tro ptr la dia chi bien value

	cout << &value << '\n'; // in dia chi bien value
	cout << ptr << '\n'; // in dia chi cua con tro ptr dang giu

	//------------------------------------------------------------------

	int iValue = 5;
	double dValue = 7.0;

	int *iPtr11 = &iValue; // ok
	double *dPtr11 = &dValue; // ok

	// iPtr = &dValue; // sai – con tro int khong the tro den dia chi bien double
	// dPtr = &iValue; // sai – con tro double khong the tro den dia chi bien int

	// int *ptr = 5; // sai – con tro chi co the giu 1 dia chi
	// double *dPtr = 0x0012FF7C; // sai

	cout << typeid(&iValue).name() << "\n";

	//-----------------------------------------------------------------------
	int value111 = 10;
	cout << &value111 << "\n"; // in dia chi bien value
	cout << value111 << "\n"; // in gia tri bien value

	int *ptr111 = &value111; // ptr tro den bien value
	cout << ptr111 << "\n"; // in dia chi con tro ptr tro den, tuong duong &value
	cout << *ptr111 << "\n"; // in gia tri tai dia chi ma ptr tro den , tuong duong value

	//---------------------------------------------------------------------

	int value1111 = 5;
	int value2222 = 7;

	int *ptr1111;

	ptr = &value1111; // ptr points to value1
	cout << *ptr1111 << "\n"; // prints 5

	ptr = &value2222; // ptr now points to value2
	cout << *ptr1111 << "\n"; // prints 7

	// --------------------------------------------------------------------------
	int value11111 = 5;
	int *ptr11111 = &value; // ptr points to value

	*ptr11111 = 7; // *ptr tuong duong voi value
	cout << value11111; // prints 7

	//----------------------------------------------------------------------------
	/*
	char *chPtr; // bien kieu char co kich thuoc 1 byte
		int *iPtr; // bien kieu int co kich thuoc 4 bytes
		struct Something
		{
			int nX, nY, nZ;
		};
		Something *somethingPtr; // bien kieu Something la 12 bytes

		cout << sizeof(chPtr) << '\n'; // 4 bytes
		cout << sizeof(iPtr) << '\n'; // 4 bytes
		cout << sizeof(somethingPtr) << '\n'; // 4 bytes
	
	*/

	//------------------------------------------------------------------------------
	//Truy cap con tro khong hop le
	//Chu y : Neu truy xuat gia tri cua con tro khi no chua gan dia chi cu the, chuong trinh co the bi dong boi he dieu hanh.
	/*
	#include <iostream>
	using namespace std;

	void foo(int *&p)
	{
		// p la tham chieu den con tro (se duoc de cap o nhung bai sau)
		// Ham nay dung de danh lua compiler rang con tro p da bi thay doi
		// Muc dich la de chuong trinh duoc bien dich thanh cong
	}

	int main()
	{
		int *p; // Khai bao 1 con tro mang gia tri rac
		foo(p); // Danh lua compiler rang con tro p da duoc gan

		cout << *p; // In ra gia tri tai dia chi rac

		return 0;
	}
	
	*/



	system("Pause");
	return 0;
}