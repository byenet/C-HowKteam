#include <iostream>
#include <conio.h>
#include <iomanip>         // for set
#include <cstdlib>        // for srand() and rand()
#include <ctime>       // for time()

//bo sung truong hop phat sinh so am  arr[i] = rand() * -1;


using namespace std;

const int MaxD1(2);
const int MaxC1(3);
const int MaxD2(500);
const int MaxC2(500);

void Level1();
void NhapMT1(int[][MaxC2], int &, int&);
void XuatMT1(int[][MaxC2], int, int);
void NhapMT2(int[], int &, int &);
void XuatMT2(int[], int, int);
void NhapMT4(int[][MaxC2], int &, int &);
void NhapMT3(int[][MaxC2], int &, int &, int &);
void NhapMT5(int[][MaxC2], int &, int &, int &, int &);

int TongMang2Chieu(int[][MaxC2], int, int);
int TichMang2Chieu(int[][MaxC2], int, int);

int TongDong(int[][MaxC2], int, int);
int TongCot(int[][MaxC2], int, int);
int TichDong(int[][MaxC2], int, int);
int TichCot(int[][MaxC2], int, int);

int TimMax(int[][MaxC2], int, int);
int TimMin(int[][MaxC2], int, int);



int main()
{
	cout << setfill('-') << setw(119) << "-" << endl;
	cout << "Chuong trinh test mang 2 chieu: " << endl;
	cout << setw(119) << "-" << endl;
	int h = 1;

	if (h == 0)
		// test xuat va nhap khi da biet (level 1)
	{
		Level1();
	}

	if (h == 0)
		// Nhap xuat mang 2 chieu truyen thong (level2)
	{
		int m, o;
		int n[MaxD2][MaxC2];
		NhapMT1(n, m, o);
		XuatMT1(n, m, o);

	}

	if (h == 0)
		//Nhap Xuat mang hai chieu dung mang mot chieu (level2)
	{
		int a[MaxD2], m, o;
		NhapMT2(a, m, o);
		XuatMT2(a, m, o);

	}

	if (h == 0)
		// Chuong trinh nhap mang hai chieu ngau nhien voi so tu 0 tro len (level3)
	{
		int a[MaxC2][MaxD2], m, n;
		NhapMT4(a, m, n);
		XuatMT1(a, m, n);
	}

	if (h == 0)
		// Chuong trinh nhap mang hai chieu ngau nhien voi so tu 0 den b (level3)
	{
		int a[MaxC2][MaxD2], m, n, b;
		NhapMT3(a, m, n, b);
		XuatMT1(a, m, n);

	}

	if (h == 0)
		// Chuong trinh nhap mang hai chieu ngau nhien trong khoang tu a toi b
	{
		int a[MaxD2][MaxC2], m, n, e, f;
		NhapMT5(a, m, n, e, f);
		XuatMT1(a, m, n);
	}

	if (h == 0)
		// Chuong trinh tinh tong va tich cac phan tu mang hai chieu
	{
		cout << "Day la chuong trinh tinh tong va tich cac phan tu cua mang hai chieu" << endl;
		int a[MaxD2][MaxC2], m, n;
		NhapMT1(a, m, n);
		XuatMT1(a, m, n);
		cout << "Tong cua mang tren la: " << TongMang2Chieu(a, m, n) << endl;
		cout << "Tich cua mang tren la: " << TichMang2Chieu(a, m, n) << endl;
	}

	if (h == 0)
		// Chuong trinh tinh tong va tich dong ban chon
	{
		cout << "Day la chuong trinh tinh tong va tich dong minh chon tren ma tran" << endl;
		int a[MaxD2][MaxC2], m, n, d;
		NhapMT1(a, m, n);
		XuatMT1(a, m, n);
		cout << "Moi ban nhap Dong muon tinh tich va tong: ";
		cin >> d;
		cout << "Day la tong cua dong " << d << ": " << TongDong(a, n, d) << endl;
		cout << "Day la tich cua dong " << d << ": " << TichDong(a, n, d) << endl;

	}

	if (h == 0)
		// Chuong trinh tinh tong va tich cot ban chon
	{
		cout << "Day la chuong trinh tinh tong va tich cot minh chon tren ma tran" << endl;
		int a[MaxD2][MaxC2], m, n, c;
		NhapMT1(a, m, n);
		XuatMT1(a, m, n);
		cout << "Moi ban nhap Cot muon tinh tich va tong: ";
		cin >> c;
		cout << "Day la tong cua cot " << c << ": " << TongCot(a, m, c) << endl;
		cout << "Day la tich cua cot " << c << ": " << TichCot(a, m, c) << endl;
	}

	if (h == 1)
		// Chuong trinh tim so lon nhat cua mang hai chieu
	{
		cout << "Day la chuong trinh tim so lon nhat cua mang hai chieu: " << endl;
		int a[MaxC1][MaxC2], m, n;
		NhapMT1(a, m, n);
		XuatMT1(a, m, n);
		cout << setw(119) << "-" << endl;
		cout << "Gia tri lon nhat cua ma tran tren la: " << TimMax(a, m, n) << endl;
		cout << "Gia tri nho nhat cua ma tran tren la: " << TimMin(a, m, n) << endl;

	}


	system("Pause");
	return 0;
}

void Level1()
{
	int mt1[MaxD1][MaxC1] = { 1,2,3,4,5,6 };
	int mt2[][MaxC1] = { { 2,1,4 },{ 4,6,7 } };
	int i, j;
	cout << "Ma tran 1 la: " << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			cout << "\t" << mt1[i][j];
		cout << endl;
	}

	cout << "Ma tran 2 la: " << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			cout << "\t" << mt2[i][j];
		cout << endl;
	}
}

void NhapMT1(int n[][MaxC2], int &m, int&o)
{
	int i, j;
	cout << " Day la chuong trinh nhap xuat mang hai chieu co ban truyen thong: " << endl;
	cout << "Moi ban nhap vao so dong: ";
	cin >> m;
	cout << "Moi ban nhap vao so cot: ";
	cin >> o;

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < o; j++)
		{
			cout << "mt[" << i << "][" << j << "] :";
			cin >> n[i][j];
		}
	}
}

void XuatMT1(int n[][MaxC2], int m, int o)
{
	int i, j;
	cout << "Day la mang ban vua nhap: " << endl;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < o; j++)
		{
			cout << "mt[" << i << "][" << j << "] = " << n[i][j] << "\t";
		}
		cout << endl;
	}
}

void NhapMT2(int a[], int &m, int &o)
{
	int i, j;
	cout << "Day la chuong trinh nhap xuat mang 2 chieu bang mang mot chieu: " << endl;
	cout << "Nhap vao so dong: ";
	cin >> m;
	cout << "Nhap vao so cot: ";
	cin >> o;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < o; j++)
		{
			cout << "mt[" << i << "][" << j << "]: ";
			cin >> a[i*o + j]; //(i * cot + j)
		}
	}
}

void XuatMT2(int a[], int m, int o)
{
	int i, j;
	cout << "Day la ma tran ban vua nhap: " << endl;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < o; j++)
		{
			cout << "\t" << "mt[" << i << "][" << j << "]: " << a[i*o + j]; //(i * cot + j)
		}
		cout << endl;
	}
}

void NhapMT4(int a[][MaxC2], int &m, int &n)
{
	cout << "Day la chuong trinh nhap mang 2 chieu voi gia tri tu tao ngau nhien" << endl;
	int i, j;
	cout << "Nhap vao so dong: ";
	cin >> m;
	cout << "Nhap vao so cot: ";
	cin >> n;
	srand((unsigned)time(NULL)); //Khoi tao bo phat sinh so ngau nhien lai (neu k co van duoc nhuwng lan sau goi lai van la mang vs cac so ngau nhien cu...co cai nay se tao ngau nhien moi lien tuc)
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[i][j] = rand();  // Tao gia tri ngau nhien tu 0 tro di
		}
	}
}


void NhapMT3(int a[][MaxC2], int &m, int &n, int &b)
{
	cout << "Day la chuong trinh nhap mang 2 chieu voi gia tri tu tao ngau nhien tu 0 den b" << endl;
	int i, j;
	cout << "Nhap vao so dong: ";
	cin >> m;
	cout << "Nhap vao so cot: ";
	cin >> n;
	cout << " Nhap vao gia tri cuoi cua mang ngau nhien bat dau tu 0: ";
	cin >> b;
	srand((unsigned)time(NULL)); //Khoi tao bo phat sinh so ngau nhien lai (neu k co van duoc nhuwng lan sau goi lai van la mang vs cac so ngau nhien cu...co cai nay se tao ngau nhien moi lien tuc)
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[i][j] = rand() % b;  // Tao gia tri ngau nhien tu 0 den b... (kh?i t?o m?ng ng?u nhiên t? [0][0] d?n [m-1][n-1].)
		}
	}
}


void NhapMT5(int a[][MaxC2], int &n, int &m, int &b, int &c)
{
	cout << "Day la chuong trinh nhap mang 2 chieu voi gia tri tu tao ngau nhien tu a den b: " << endl;
	int i, j;
	cout << "Nhap vao so dong: ";
	cin >> m;
	cout << "Nhap vao so cot: ";
	cin >> n;
	cout << "Moi ban nhap vao gia tri bat dau tao ngau nhien: ";
	cin >> b;
	cout << "Moi ban nhap vao gia tri cuoi cua khoang ngau nhien: ";
	cin >> c;

	srand((unsigned)time(NULL)); //Khoi tao bo phat sinh so ngau nhien lai (neu k co van duoc nhuwng lan sau goi lai van la mang vs cac so ngau nhien cu...co cai nay se tao ngau nhien moi lien tuc)
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			// rand() % (b-a+1)+a
			a[i][j] = rand() % (c - b + 1) + b;  // Tao gia tri ngau nhien tu a toi b voi c=(b-a+1)+a
		}
	}
}

int TongMang2Chieu(int a[][MaxC2], int n, int m)
{
	int i, j;
	int sum(0);  // Phai ep cho sum bang 0 dau tien k se loi;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum += a[i][j];
		}
	}
	return sum;
}

int TichMang2Chieu(int a[][MaxC2], int n, int m)
{
	int i, j;
	int tich(1);  // Phai ep cho sum bang 0 dau tien k se loi;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			tich *= a[i][j];
		}
	}
	return tich;
}

int TongDong(int a[][MaxC2], int n, int d)
{
	int j;
	int sumD(0);
	for (j = 0; j < n; j++)
	{
		sumD += a[d][j];
	}
	return sumD;
}

int TongCot(int a[][MaxC2], int m, int c)
{
	int i;
	int sumC(0);
	for (i = 0; i < m; i++)
	{
		sumC += a[i][c];
	}
	return sumC;
}

int TichDong(int a[][MaxC2], int n, int d)
{
	int j;
	int tichD(1);
	for (j = 0; j < n; j++)
	{
		tichD *= a[d][j];
	}
	return tichD;
}

int TichCot(int a[][MaxC2], int n, int c)
{
	int i;
	int tichC(1);
	for (i = 0; i < n; i++)
	{
		tichC *= a[i][c];
	}
	return tichC;
}

int TimMax(int a[][MaxC2], int m, int n)
{
	int i, j;
	int  max = a[0][0];
	for (i = 1; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			if (a[i][j] > max)
				max = a[i][j];
		}
	}
	return max;
}

int TimMin(int a[][MaxC2], int m, int n)
{
	int i, j;
	int  min = a[0][0];
	for (i = 1; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			if (min > a[i][j])
				min = a[i][j];
		}
	}
	return min;
}



