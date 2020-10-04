#include <iostream>
using namespace std;

int main()
{
	cout << "Nhap chieu dai mang: ";
	int length;
	cin >> length;

	int *array = new int[length]; // kich thuoc mang co the la bien so

								  // su dung mang
								  // ...

	delete[] array; // tra lai vung nho mang array cho he dieu hanh

	//------------------------------------------------------------------
	//Khoi tao mang dong trong C++
	int *array2 = new int[4];
	array2[0] = 5;
	array2[1] = 7;
	array2[2] = 4;
	array2[3] = 8;

	// khoi tao trong c++11 cho phep khoi tao truc tiep
	int *array3 = new int[4]{ 5, 7, 4, 8 };

	/*
	int fixedArray[]{ 1, 2, 3 }; // ok

	int *dynamicArray1 = new int[] {1, 2, 3}; // error

	int *dynamicArray2 = new int[3]{ 1, 2, 3 }; // ok
	
	*/

	int *array4 = new int[10](); // mang dong co 10 phan tu 0


	// -----------------------------------------------------------------
	// Thay doi kich thuoc mang dong
	/*
		Buoc 1: Cap phat dong mot mang moi.
		Buoc 2: Sao chep cac phan tu tu mang cu sang vung nho moi.
		Buoc 3: Xoa mang cu.
	*/

	int size = 3;
	// cap phat dong va khoi tao mang 3 phan tu
	int *array5 = new int[size] { 3, 5, 7 };

	int newSize = 6;
	// cap phat dong mang moi 6 phan tu
	int *resize = new int[newSize];

	// sao chep phan tu
	for (int i = 0; i < size; i++)
	{
		resize[i] = array5[i];
	}

	delete[] array5; // Xoa mang hien tai

	array5 = resize; // Tro sang mang da resize
	size = newSize; // kich thuoc mang moi

					// su dung mang array da resize
					// ...

	delete[] array5; // Thu hoi mang
	system("Pause");
	return 0;
}
