#include <iostream>
#include <string>
#include <cstdlib> // for srand() and rand()
#include <ctime>	// for tine()
using namespace std;

// dinh nghia so phan tu mang
#define MAX 3

int main()
{

	//Khoi tao
	int array[4] = { 5, 8, 2, 7 };

	int array[4] = { 5, 8 };

	int array[4] = {};

	int array[] = { 5, 8, 2, 7 };

	// Khoi tao dong nhat
	int array1[4]{ 5, 8, 2, 7 }; // 5 8 2 7
	int array2[4]{ 5, 8 }; // 5 8 0 0
	int array3[4]{}; // 0 0 0 0
	int array4[]{ 5, 8, 2, 7 }; // 5 8 2 7


	//----------------------------------------------------------
	// khoi tao mang string 3 phan tu
	string arrKteam[MAX]{ "Hello Howkteam.com!", "Free Education", "Share to be better" };
	cout << "size of arrKteam: " << MAX * sizeof(arrKteam) << " byte" << endl;

	// xuat gia tri cac phan tu mang
	for (int i = 0; i < MAX; i++)
	{
		cout << arrKteam[i] << endl;
	}

	//----------------------------------------------------
	int arr[MAX];

	// khoi tao so ngau nhien
	srand(time(NULL));

	// nhap mang ngau nhien
	for (int i = 0; i < MAX; i++)
	{
		arr[i] = rand();
	}

	// xuat mang
	for (int i = 0; i < MAX; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	system("Pause");
	return 0;
}