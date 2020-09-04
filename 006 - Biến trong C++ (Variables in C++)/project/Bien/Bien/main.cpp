#include <iostream>
using namespace std;

int main(){

	// Xuat thong bao "2x - 6 = 0" ra man hinh console
	cout << "2x - 6 = 0" << endl;

	// Xuat ket qua nghiem x
	cout << "x = " << (6 / 2) << endl;


	// Khai bao bien so nguyen nvarName
	// Gia su nVarName duoc cap vung nho tai dia chi 0x0069
	int nVarName;

	// Gan gia tri 96 cho vung nho tai dia chi 0x0069
	nVarName = 96;

	// In gia tri bien nVarName tai dia chi 0x0096 ra man hinh
	cout << nVarName << endl;




	// Khoi tao sao chep gia tri cho bien voi toan tu gan =
	int nSoNguyen1 = 69;  // copy initialization

	// Khoi tao truc tiep gia tri cho bien voi dau ngoac don ()
	int nSoNguyen2(69);

	// Uniform initialization C++11 - Khoi tao dong nhat -> khong the ep kieu ngam dinh
	int nSoNguyen3{ 69 };  // Khoi tao gia tri 69
	int nSoNguyen4{};  // Khoi tao gia tri 0 ( hoac empty, tuy kieu du lieu)



	// Cac cau lenh ben duoi la nhu nhau
	int nKteam1;
	int nKteam2;
	int nKteam3, nKteam4;

	int nKteam5 = 1, nKteam6 = 2;		// copy initialization
	int nKteam7(3), nKteam8(4);			// direct initialization
	int nKteam9{ 5 }, nKteam10{ 6 };	// uniform initialization





	// Dinh nghia nhieu bien trong mot cau lenh
	// int nKteam11, int nKteam12;	// Sai: Compile error
	int nKteam13, nKteam14;		// Dung

	// Dinh nghia nhieu kieu du lieu trong mot cau lenh
	// int nKteam15, double nKteam16;	// Sai: Compile error
	int nKteam17; double dKteam18;		// Dung: Khong nen

	// Dung va nen viet
	int nKteam19;
	double dKteam20;

	int nKteam21 = 1, nKteam22 = 22; // Khong nen
	int nKteam23 = 23;		// Nen
	int nKteam24 = 24;		// Nen

	system("Pause");
	return 0;
}