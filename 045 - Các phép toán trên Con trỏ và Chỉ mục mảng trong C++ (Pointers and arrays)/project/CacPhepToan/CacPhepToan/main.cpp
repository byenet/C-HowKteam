#include <iostream>
using namespace std;

int main(){

	int value = 5;
	int *ptr = &value;

	cout << ptr << '\n';
	cout << ptr + 1 << '\n';
	cout << ptr + 2 << '\n';
	cout << ptr + 3 << '\n';


	cout << ptr++ << '\n';
	cout << ptr++ << '\n';
	cout << ptr++ << '\n';
	cout << ptr << '\n';



	//------------------------------------------------------
	int array2[] = { 5, 8, 2, 7 };

	cout << "Element 0 is at address: " << &array2[0] << '\n';
	cout << "Element 1 is at address: " << &array2[1] << '\n';
	cout << "Element 2 is at address: " << &array2[2] << '\n';
	cout << "Element 3 is at address: " << &array2[3] << '\n';

	//--------------------------------------------------------
	int array3[] = { 5, 8, 2, 7 };
	cout << &array3[1] << '\n'; // dia chi vung nho phan tu 1
	cout << array3 + 1 << '\n'; // dia chi vung nho phan tu 1 

	cout << array3[1] << '\n'; // 8
	cout << *(array3 + 1) << '\n'; // 8

	//-------------------------------------------------------
	const int arrayLength = 4;
	int array4[arrayLength] = { 5, 8, 2, 7 };

	for (int* ptr = array4; ptr < array4 + arrayLength; ptr++)
	{
		cout << *ptr << '\n';
	}


	system("Pause");
	return 0;
}