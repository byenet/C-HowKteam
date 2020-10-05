#include <iostream>
using namespace std;

// xay dung ham chuyen doi
int getSingleIndex(int row, int col, int numberOfColumnsInArray)
{
	return (row * numberOfColumnsInArray) + col;
}

int main() {

	int value = 10;

	int *ptr = &value;
	cout << *ptr << "\n"; // in gia tri tai dia chỉi ptr tro den (bien value)

	int **ptr_ptr = &ptr; // con tro "ptr_ptr" tro den con tro "ptr" tro den bien "value"
	cout << *ptr_ptr << "\n"; // in gia tri tai dia chi ptr_ptr tro den (dia chi ptr (&ptr)) 
	cout << **ptr_ptr << "\n"; // dereference 2 lan de in gia tri tai dia chi ptr tro den (bien value)

	//--------------------------------------------------------------------------------------------------
	// Con tro tro den con tro co the duoc dung de quan ly mang mot chieu cac con tro:
	int *ptr1 = NULL;
	int *ptr2 = NULL;

	int **ptr_ptr2 = new int*[2];
	ptr_ptr2[0] = ptr1;
	ptr_ptr2[1] = ptr2;
	// Mang mot chieu cac con tro hoat dong nhu mot mang thong thuong, ngoai tru viec moi phan tu mang la mot con tro.

	//---------------------------------------------------------------------------------------------------
	//cap phat dong mang 2 chieu phuc tap hon :

	//Buoc 1 : cap phat dong mot mang cac con tro.
	//Bước 2 : lap qua mang con tro va cap phat mot mang dong cho tung phan tu mang.

	int row, col;
	// nhap so dong, cot
	cout << "Nhap so dong: ";
	cin >> row;
	cout << "Nhap so cot: ";
	cin >> col;

	// cap phat dong
	int **arr = new int*[row]; // Cap phat vung nho cho ROW con tro kieu (int *): dong
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[col]; // Moi con tro kieu (int *) se quan ly COL phan tu kieu int: cot
	}

	// nhap mang 2 chieu
	cout << "Nhap mang:" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}

	// xuat mang 2 chieu
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// Giai phong vung nho cho tung phan tu mang
	for (int i = 0; i < row; i++)
	{
		delete[] arr[i];
	}

	// Giai phong cho mang
	delete[] arr;

	//--------------------------------------------------------------------------------------------
	// Vi viec cap phat dong va giai phong mang hai chieu rat phuc tap, nen lap trinh vien thuong su dung mang 1 chieu kich thuoc x*y thay the cho mang 2 chieu x dong, y cot :

	// gia su can mang 2 chieu 5 dong, 10 cot
	// cap phat mang 1 chieu
	int row2 = 5;
	int col2 = 10;
	int n = row2 * col2; // 5 * 10 = 50 phan tu
	int *arr2 = new int[n];

	// gan arr[1,2] = 3 su dung mang 1 chieu arr
	arr2[getSingleIndex(1, 2, col2)] = 3;

	// xuat gia tri arr[1,2]
	cout << arr2[getSingleIndex(1, 2, col2)] << "\n";


	system("Pause");
	return 0;
}