#include <iostream>
using namespace std;

int main()
{

	char sz[10] = { 'K', 't', 'e', 'a', 'm', '\0' };
	char sz2[10] = "Kteam"; // Tu dong them '\0' vao cuoi chuoi

	char sz3[] = { 'K', 't', 'e', 'a', 'm', '\0' };
	char sz4[] = "Kteam"; // Tu dong them '\0' vao cuoi chuoi

	// 0 1 2 3 4  5
	// K t e a m \0
	char szKteam[] = "Kteam";
	cout << szKteam << endl; // "Kteam"

							 // 0 1 2 3 4 5 6  7  8  9
							 // F r e e E d u \0 \0 \0
	char szFreeEdu[10] = "FreeEdu";
	cout << szFreeEdu << endl; // "FreeEdu"

							   // ky tu szFreeEdu[7] la '\0' (null), nen chi in chuoi den vi tri 6
							   // 0 1 2 3 4 5 6  7  8  9
							   // F r e e E d u \0 \0  a
	szFreeEdu[9] = 'a';
	cout << szFreeEdu << endl; // "FreeEdu"

	//-----------------------------------------------------

	// Nhap mang ky tu
	char szFullName[50];

	cout << "Nhap ho ten: ";
	cin >> szFullName;

	cout << "Ho ten cua ban la: " << szFullName << endl;

	//----------------------
	char szAddress[20];

	cout << "Nhap dia chi: ";
	cin.getline(szAddress, 20);

	cout << "Dia chi cua ban la: " << szAddress << endl;

	system("Pause");
	return 0;
}