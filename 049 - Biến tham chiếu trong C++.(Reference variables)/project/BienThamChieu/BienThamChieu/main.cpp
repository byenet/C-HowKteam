#include <iostream>
using namespace std;

void change(int &y)	// y la bien tham chieu
{
	cout << "y = " << y << endl;

	y = 69;

	cout << "y = " << y << endl;
}	// y bi huy

int main()
{
	//Tham chieu duoi dang bi danh 
	int value = 10;
	int &ref = value; // ref tham chieu den bien value

	value = 15; // value = 15
	ref = 20; // value = 20

	cout << value << "\n"; // 20
	++ref;
	cout << value << "\n"; // 21

						   // in dia chi value va ref
	cout << &value << "\n";
	cout << &ref << "\n";

	//---------------------------------------
	// Tham chieu duoi dang tham so ham
	int x = 1;
	cout << "x = " << x << endl;

	change(x);

	cout << "x = " << x << endl;

	//---------------------------------------
	// Tham chieu va con tro
	int value2 = 10;
	int *const ptr = &value2; // hang con tro
	int &ref2 = value2;

	*ptr = 15;

	cout << *ptr << "\n";
	cout << ref2 << "\n";
	cout << value2 << "\n";

	ref2 = 20;

	cout << *ptr << "\n";
	cout << ref2 << "\n";
	cout << value2 << "\n";

	//--------------------------------------------
	// Tham chieu bat buoc phai duoc khoi tao khi khai bao
	int value3 = 10;
	int &ref3 = value3; // ok
	//int &invalidRef; // loi: invalid, needs to reference something
	//----
	// Tham chieu den cac gia tri khong phai hang chi co the duoc khoi tao voi cac gia tri khong phai la hang.
	int x2 = 10;
	int &ref4 = x; // ok

	const int y = 7;
	//int &ref2 = y; // loi

	//int &ref3 = 6; // loi

	// de tham chieu den mot doi tuong hang ta su dung tham chieu hang bang cach them tu khoa const
	const int y2 = 7;
	const int &ref5 = y2; // ok
	//Tham chieu hang co the tham chieu den mot doi tuong khong phai hang:
	int y3 = 7;
	const int &ref6 = y3; // ok
	//----
	// Khong the tham chieu den mot doi tuong khac sau khi khoi tao
	int value5 = 5;
	int value6 = 6;

	int &ref7 = value5; // ok
	ref7 = value6; // ref = value5 = 6
	cout << ref7 << endl;
	cout << &ref7 << endl;
	cout << &value5 << endl;
	// ref luôn tham chiếu đến value5, và ko thể thay đổi


	system("pause");
	return 0;
}