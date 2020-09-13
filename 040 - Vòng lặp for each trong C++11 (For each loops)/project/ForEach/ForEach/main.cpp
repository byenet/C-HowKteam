#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 14, 3, 6, 27, 12 };
	for (int item : arr)
	{
		// bien item dai dien cho phan tu mang o moi vong lap
		cout << item << " ";
	}
	cout << endl;

	// Dung vs auto
	for (auto item : arr) // compiler tu dong xac dinh kieu cho item
	{
		cout << item << " ";
	}
	cout << endl;

	//----------------------------
	// For each va tham chieu
	int arr2[] = { 14, 3, 6, 27, 12 };
	for (auto &item : arr2) // item la 1 bien tham chieu den phan tu hien tai
	{
		cout << item << " ";
	}

	// Neu khong muon thay doi gia tri phan tu trong mang dung const
	for (const auto &item : arr2) // item la 1 bien tham chieu den phan tu hien tai
	{
		cout << item << " ";
	}

	system("Pause");
	return 0;
}