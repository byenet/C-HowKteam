
// O muc thu vien

//****************************************
// Desctiption: Thu vien nay khai bao cac standard input/output stream object (iostream)
//****************************************
#include <iostream>
using namespace std;

int main(){
	
#pragma region Ky hieu //

	#pragma region Khong nen

		cout << "hello" << endl; // Moi thu ban phai ky hieu nay se duoc bo qua
		cout << "Huy" << endl; // Dung de giai thich cho dong code nay
		cout << "Huy" << endl;	// Han che commment theo cach nay
		cout << "Huy" << endl; // Dac biet voi dong code dai

	#pragma endregion

	#pragma region Nen

		// in ra man hinh dong chu: huy
		cout << "huy" << endl;

		// Comment nhu the nay rat de doc
		cout << "huy" << endl;

		// Phan biet ro rang giua comment va code
		cout << "huy" << endl;

		// Dac biet voi dong code dai
		cout << "huy" << endl;

	#pragma endregion

#pragma endregion

#pragma region Ky hieu /**/

	/*
		Day la comment nhieu dong
		Moi thu ben trong ky hieu nay se duoc bo qua
		Ban co the viet ca bai van vao day...
	*/

		string /* Bo qua moi thu trong nay */ strHowKteam{ "HowKteam" };

	/*
	* Day la comment nhieu dong
	* Moi thu ben trong ky hieu nay se duoc bo qua
	* Comment nhu the nay se dep hon
	*/

		/* Khong the comment /**/ long nhau * /
			/* Day la comment cha /* comment con */ loi roi * /
			// comment 1 dong /* comment nhieu dong */ van la comment

#pragma endregion

#pragma region comment cho tung dong code minh viet ra

	#pragma region khong nen vi comment vo nghia vi nhin vao biet roi

			const int size = 10;
			// Gan smallestIndex bang 0
			int smallestIndex = 0;
			for (int startIndex = smallestIndex + 1; startIndex < size; ++startIndex) {
				//...
			}

			int array[] = { 6, 9, 69, 96 };
			// Su dung insertion sort sap xep mang
			InsertionSort(array);

	#pragma endregion

	#pragma region nen vi can giai thich tai sao

				const int size = 10;
				// Gan smallestIndex la chi so cua phan tu nho nhat, gia su phan tu dau tien
				int smallestIndex = 0;
				for (int startIndex = smallestIndex + 1; startIndex < size; ++startIndex) {
					//...
				}

				int array[] = { 6, 9, 69, 96 };
				// Can mot thuat toan on dinh, hieu suat khong thuc su quan trong
				InsertionSort(array);

	#pragma endregion


#pragma endregion


#pragma region Khong lam dung comment
	
	#pragma region Khong nen

				// So luong phan tu cua mang
				const int n = 69;

				int a{ 69 };
				int b{ 6 };
				int c{ 9 };

				// Gan x bang max cua a,b,c
				int x = a > b ? (a > c ? a : c) : (b > c ? b : c);

	#pragma endregion

	#pragma region Nen

				const int nNumberOfElements = 69;

				int a{ 69 };
				int b{ 6 };
				int c{ 9 };

				int nMax = a;
				if (nMax < b) {
					nMax = b;
				}
				if (nMax < c) {
					nMax = c;
				}

	#pragma endregion

#pragma endregion


	system("Pause");
	return 0;
}

// O muc ham

//****************************************
// Desctiption: Chuong trinh tinh thoi gian xay duoc nha dua vao noi ban song va nganh nghe cua ban
//****************************************
double TinhThoiGianXayNha(string address, string job) {}

//****************************************
// Desctiption: Ham sap xem mang bang thuat toan quick sort
//****************************************
void QuickSort(int *arr, int left, int right){
	///////////////////////////////////////////////////////////////////////////////////////////////
	//
	// De sap xep bang thuat toan quick sort, ham thuc hien theo cac buoc ben duoi:
	// 1. Tim mot gia tri truc.
	// 2. Di chuyen tat ca phan tu lon hon hoac bang gia tri truc sang phai.
	// 3. Di chuyen tat ca phan tu nho hon gia tri truc sang trai.
	// 4. Sap xep de quy cho 2 mang con ben trai va ben phai.
	//
	///////////////////////////////////////////////////////////////////////////////////////////////
	// code here...
}

void InsertionSort(int *array) {
	//...
}

// dung toan tu tien xu ly de comment (if va endif)
// sua 0 thanh 1 de chay code
#if 0
	
	const int nNumberOfElements = 69;

				int a{ 69 };
				int b{ 6 };
				int c{ 9 };

				int nMax = a;
				if (nMax < b) {
					nMax = b;
				}
				if (nMax < c) {
					nMax = c;
				}

#endif