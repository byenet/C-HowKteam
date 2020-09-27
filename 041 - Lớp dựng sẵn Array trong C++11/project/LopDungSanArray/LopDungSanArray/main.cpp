#include <iostream>
#include <array>
using namespace std;

#define MAX 5

void printArray(const array<int, MAX> &arr) // truyen tham chieu (hang) vi hieu suat
{
	cout << "So phan tu: " << arr.size() << endl; // co the biet so phan tu o moi ham
	for (const auto &item : arr) // co the su dung for-each loops o moi ham
	{
		cout << item << ' ';
	}
	cout << endl;
}

int main() {


	array <int, 5> arr; // mang arr co 5 phan tu kieu int
	array <string, 10> arr2; // mang arr2 co 10 phan tu kieu string

	array <int, 5> arr3 = { 2, 5, 8, 3, 1 };
	array <int, 5> arr4{ 2, 5, 8, 3, 1 }; // khoi tao dong nhat (C++11)

	array <int, 5> arr5;
	arr3 = { 2, 5, 8, 3, 1 }; // khoi tao day du cac phan tu
	arr3 = { 2, 5, 8 }; // khoi tao 3 phan tu dau, con lai la 0

	//---------------------------
	array <int, 5> arr6 = { 2, 5, 8, 3, 1 };
	arr6[1] = 3; // gan 3 cho phan tu thu 2
	cout << arr6[4] << endl; // truy xuat gia tri phan tu thu 5

	//Lop std::array cung cap ham at() de truy cap vao phan tu mang, no bao gom viec kiem tra pham vi cua mang :
	array <int, 5> arr7 = { 2, 5, 8, 3, 1 };
	arr7.at(1) = 3; // gan 3 cho phan tu thu 2
	//cout << arr7.at(6); // ngoai pham vi mang, nem ra 1 loi va ket thuc chuong trinh

	//---------------------------------------------------------------
	// thao tac voi mang kieu std::array
	array <int, 5> arr8 = { 2, 5, 8, 3, 1 };
	cout << arr8.size() << endl;
	printArray(arr8);

	// sap xep
	cout << "Sap xep tang: \n";
	sort(arr8.begin(), arr8.end()); // sap xep tang
	printArray(arr8);

	cout << "Sap xep giam: \n";
	sort(arr8.rbegin(), arr8.rend()); // sap xep giam
	printArray(arr8);


	system("Pause");
	return 0;
}