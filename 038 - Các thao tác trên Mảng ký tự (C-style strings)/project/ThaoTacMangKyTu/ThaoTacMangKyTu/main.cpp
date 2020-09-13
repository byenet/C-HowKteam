#define _CRT_NONSTDC_NO_DEPRECATE  // for strlwr strupr
#define _CRT_SECURE_NO_WARNINGS		// for strcpy strcat
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char szTeam[20] = "Kteam"; // mang co 20 phan tu (5 ky tu thuong, 15 ky tu '\0')
	cout << "Team cua tui: " << szTeam << endl;
	cout << szTeam << " co " << strlen(szTeam) << " ky tu." << endl;
	cout << szTeam << " co " << sizeof(szTeam) << " phan tu trong mang." << endl;

	//---------------------------------------------------------------------
	// Chuyen chu hoa chu thuong

	char szString1[] = "Hello Howkteam.com!";
	char szString2[] = "Hello Howkteam.com!";

	cout << "s1: " << szString1 << endl;
	cout << "s2: " << szString2 << endl;

	/*_strlwr_s(szString1);
	_strupr_s(szString2);*/

	strlwr(szString1);
	strupr(szString2);

	cout << "s1: " << szString1 << endl;
	cout << "s2: " << szString2 << endl;

	//-------------------------------------------------------------------
	// Sao chep mang ky tu
	char szSource[] = "Howkteam.com";
	char szDest[5];

	// sao chep chuoi szSource sang chuoi szDest

	// c style Khong bao loi khi vuot qua bo nho
	//strcpy_s(szDest, szSource);
	//strcpy(szDest, szSource);

	// se bao loi neu vuot qua bo nho trong c++ 11
	strcpy_s(szDest, 5, szSource); // 1 assert duoc nem ra trong debug mode
	cout << "Source: " << szSource << endl;
	cout << "Dest: " << szDest << endl;

	//-------------------------------------------------------------------------------

	// Noi chuoi

	char szSource2[] = "Howkteam.com!";
	char szDest2[10] = "Hello";

	// noi chuoi

	// c style se khong co canh bao va khai bao do dai cua chuoi dich
	//strcat(szDest, " "); // "Hello "
	//strcat(szDest, szSource); // "Hello Howkteam.com!"

	// Trong c++ 11 se bao loi neu do dai chuoi dich vuot qua gioi han khai bao 
	strcat_s(szDest2, 10, " ");
	strcat_s(szDest2, 10, szSource2); // 1 assert duoc nem ra trong debug mode
	cout << "Dest: " << szDest << endl;

	//---------------------------------------------------------------------------------
	// So sanh 2 chuoi
	char szString11[] = "howkteam.com!";
	char szString22[] = "Howkteam.com!";

	cout << "s1: " << szString11 << endl;
	cout << "s2: " << szString22 << endl;

	// so sanh 2 chuoi
	int result = strcmp(szString11, szString22);
	if (result < 0)
		cout << "s1 < s2" << endl;
	else if (result > 0)
		cout << "s1 > s2" << endl;
	else
		cout << "s1 == s2" << endl;

	//-------------------------------------------------------------------------------------
	// tim kiem 
	char szString111[] = "Hello Howkteam.com!";
	char szString222[] = "kteam";

	cout << "s1: " << szString111 << endl;
	cout << "s2: " << szString222 << endl;

	if (strstr(szString111, szString222) != NULL)
		cout << "Tim thay " << szString222 << " trong " << szString111 << endl;
	else
		cout << "Khong tim thay!" << endl;


	system("Pause");
	return 0;
}