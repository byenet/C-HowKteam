#include <iostream>
using namespace std;

void printSize(int *array)
{
	// tham so array la con tro int*
	cout << sizeof(array) << '\n'; // kich thuoc con tro int*, khong phai kich thuoc mang
}

//--------------------------------------------------

// tham so ptr dang chua dia chi mang array
void changeArray(int *ptr)
{
	// thay doi mang ben trong ham dong nghia mang ben ngoai cung thay doi
	*ptr = 1;
	ptr[1] = 3;
}

int main() {

	int array[4] = { 5, 8, 2, 7 };

	// in gia tri cua bien array
	cout << "The array has value: " << array << '\n';

	// in dia chi cua bien array
	cout << "The array has address: " << &array << '\n';

	// in dia chi cua phan tu array[0]
	cout << "Element 0 has address: " << &array[0] << '\n';

	//--------------------------------------------------------

	int array2[4] = { 5, 8, 2, 7 };

	// toan tu tro (*) tra ve gia tri phan tu dau tien: array[0]
	cout << *array2 << '\n'; // 5

							// khai bao con tro ptr tro vao mang array
	int *ptr = array2;
	cout << *(ptr) << '\n'; // 5

	char name[] = "Kteam"; // C-style string (mang char)
	cout << *name << '\n'; // K

	//---------------------------------------------------------
	// Su khac nhau giua con tro va mang trong c++
	int array3[4] = { 5, 8, 2, 7 };

	cout << typeid(array3).name() << '\n';
	cout << sizeof(array3) << '\n';

	int *ptr2 = array3;
	cout << typeid(ptr2).name() << '\n';
	cout << sizeof(ptr2) << '\n';

	//----------------------------------------------------------
	// Truyen mang vao ham
	int array4[] = { 5, 8, 2, 7 };
	cout << sizeof(array4) << '\n'; // kich thuoc mang: sizeof(int) * array length

	printSize(array4); // doi so array duoc chuyen thanh con tro int* tai day


	//--------------------------------------------------------------
	// Co ban ve Truyen dia chi cho ham
	int array5[] = { 5, 8, 2, 7 };
	cout << "Before" << '\n';
	cout << "array[0]: " << array5[0] << '\n';
	cout << "array[1]: " << array5[1] << '\n';

	changeArray(array5);

	cout << "After" << '\n';
	cout << "array[0]: " << array5[0] << '\n';
	cout << "array[1]: " << array5[1] << '\n';


	system("Pause");
	return 0;
}