#include <iostream>
using namespace std;

#define ROW 100 // Max row
#define COL 100 // Max column

int main(){

	int a[2][3] =
	{
		{ 6, 4, 3 }, // row 1
		{ 7, 2, 8 }  // row 2
	};

	int b[2][3] =
	{
		{ 6 },       // row 1
		{ 7, 2, 8 }  // row 2
	};

	int c[2][3] = {};

	int d[][3] =
	{
		{ 6, 4, 3 }, // row 1
		{ 7, 2, 8 }  // row 2
	};

	//--------------------------------------------------------


	// khoi tao mang 2 dong 3 cot
	int arr[ROW][COL];
	int row, col;

	// nhap so dong, cot
	cout << "Nhap so dong: ";
	cin >> row;
	cout << "Nhap so cot: ";
	cin >> col;

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




	system("Pause");
	return 0;
}