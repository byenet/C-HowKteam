#include <iostream>
using namespace std;

void foo(int *ptr)
{
	*ptr = 20;
}

void printArray(const int *array, int length)
{
	// kiem tra con tro null
	if (!array)
		return;

	for (int index = 0; index < length; ++index)
		cout << array[index] << ' ';
}

// tempPtr la ban sao cua ptr
void setToNull(int *tempPtr)
{
	// tro tempPtr den mot vi tri khac, khong phai thay doi gia tri tempPtr tro toi
	tempPtr = nullptr;
}

void setValue(int *tempPtr)
{
	*tempPtr = 20; // thay doi gia tri tempPtr va ptr tro toi
}

// tempPtr tham chieu den con tro ptr, moi thay doi tren tempPtr se lam thay doi ptr
void setToNull2(int *&tempPtr)
{
	tempPtr = nullptr;
}

int main()
{
	int value = 10;

	cout << "value = " << value << '\n';
	foo(&value);
	cout << "value = " << value << '\n';

	// Truyen dia chi cho ham thuong duoc su dung voi mang
	int array[6] = { 6, 5, 4, 3, 2, 1 };
	printArray(array, 6);
	cout << endl;

	//---------------------------------------------
	// Truyen dia chi cho ham bang gia tri

	// Khi truyen mot con tro toi mot ham theo dia chi, gia tri cua con tro (dia chi ma no tro toi) se duoc sao chep tu doi so sang tham so ham.
	// Noi cach khac, no la phuong phap truyen gia tri. Neu ban thay doi gia tri cua tham so ham, ban chi thay doi mot ban sao. Do do, doi so con tro ban dau se khong bi thay doi.
	int value2 = 10;
	int *ptr2 = &value2;

	cout << *ptr2 << "\n"; // 10

						  // tempPtr la ban sao cua ptr2
	setToNull(ptr2);

	if (ptr2)
		cout << *ptr2 << "\n" << endl; // 10
	else
		cout << " ptr2 is null" << endl;

	//----
	int value3 = 10;
	int *ptr3 = &value3;

	cout << *ptr3 << "\n"; // 10

						  // tempPtr la ban sao cua ptr
	setValue(ptr3);

	if (ptr3)
		cout << *ptr3 << "\n" << endl; // 20
	else
		cout << " ptr is null" << endl;

	//-------------------------------------------------------------------
	// Truyen dia chi cho ham bang tham chieu
	// Chung ta co the truyen dia chi cho ham bang tham chieu de thay doi dia chi ma doi so tro den tu ben trong ham.
	int value4 = 10;
	int *ptr4 = &value4;

	cout << *ptr4 << "\n"; // 10

						  // tempPtr la tham chieu den ptr
	setToNull2(ptr4);

	if (ptr4)
		cout << *ptr4 << "\n" << endl;
	else
		cout << "ptr is null" << "\n" << endl;


	system("pause");
	return 0;
}