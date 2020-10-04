#include <iostream>
using namespace std;

enum Type
{
	INT,
	DOUBLE
};

void printValueOfPointer(void *ptr, Type type)
{
	switch (type)
	{
	case INT:
		cout << *(static_cast<int*>(ptr)) << '\n'; // ep con tro void thanh con tro int
		break;
	case DOUBLE:
		cout << *(static_cast<double*>(ptr)) << '\n'; // ep con tro void thanh con tro double
		break;
	}
}

int main() {

	// Con tro void co the tro den cac doi tuong cua bat ky du lieu nao
	int n;
	float f;
	double d;

	void *ptr;
	ptr = &n; // ok
	ptr = &f; // ok
	ptr = &d; // ok

	// con tro void khong xac dinh duoc kieu du lieu cua vung nho ma no tro toi
	// chung ta khong the truy xuat truc tiep noi dung thong qua toan tu dereference (*) duoc
	// Vi vay, con tro kieu void can phai duoc ep kieu mot cach ro rang sang con tro co kieu du lieu khac truoc khi su dung toan tu dereference (*).

	int value = 10;
	void *voidPtr = &value;

	// cout << *voidPtr << endl; // loi, khong the dereference con tro void

	int *intPtr = static_cast<int*>(voidPtr); // ep kieu thanh con tro int
	cout << *intPtr << endl; // okS

	//-----------------------------------------------
	// Ung dung con tro void 
	int nValue = 10;
	double dValue = 6.9;

	printValueOfPointer(&nValue, INT);
	printValueOfPointer(&dValue, DOUBLE);


	system("Pause");
	return 0;
}