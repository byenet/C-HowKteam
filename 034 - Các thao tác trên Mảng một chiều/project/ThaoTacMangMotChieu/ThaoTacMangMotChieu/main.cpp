// pha.cpp : Defines the entry point for the console application.
//


#include "cmath"
#include "iostream"
#include "iomanip"		//for set
#include "ctime"		//for time
#include "cstdlib"    // for srand() and rand()

void NhapMangTruyenThong(int[], int &);
void NhapMangNgauNhienCoBan(int[], int &);
void NhapMangNgauNhienTu0ToiB(int[], int &, int);
void NhapMangNgauNhienTuAToiB(int[], int &, int, int);
void NhapMangNgauNhienAmCoBan(int[], int &);
void NhapMangNgauNhienAmTuAmBToi0(int[], int &, int);
void NhapMangNgauNhienAmTuAmAToiAmB(int[], int &, int, int);
void NhapMangAB(int[], int &, char);
void XuatMangAB(int[], int, char);

void XuatMang(int[], int);
void XuatMangDeLamHamTimKiem(int[], int);
int NhapN();

int MaxMang(int a[], int n);
int MinMang(int a[], int n);

void TrungBinhCong(int[], int, float &, float &);

void HoanVi(int &, int &);
void SapXepTang(int[], int);
void SapXepGiam(int[], int);

bool SoNguyenTo(int);
void XuatSoNguyenTo(int a[], int n);
bool SoChinhPhuong(int n);
void XuatSoChinhPhuong(int[], int);
bool SoHoanHao(int);
void XuatSoHoanHao(int[], int);
void XuatSoLe(int[], int);
void XuatSoChan(int[], int);

void XuatSoNguyenToChan(int[], int);
void XuatSoNguyenToLe(int[], int);
void XuatSoChinhPhuongChan(int[], int);
void XuatSoChinhPhuongLe(int[], int);
void XuatSoHoanThienChan(int[], int);
void XuatSoHoanThienLe(int[], int);

void TachDoi(int a[], int, int[], int &, int[], int &l);
void TachChanLe(int[], int, int[], int &, int[], int &);

void GhepNoi(int[], int &, int[], int, int[], int);
void GhepXenKe3(int[], int &, int[], int, int[], int);
void GhepXenKe(int[], int &, int[], int, int[], int);
void GhepXenKe2(int[], int &, int[], int, int[], int);

void XoaTrungMangTrucTiep(int[], int &);
void XoaPhanTu(int[], int &, int);
void XoaTrung(int[], int &);
void XoaPhanTuChon(int[], int &, int);

void TimKiemX(int[], int, int, int[], int &, int &);

void Chen(int[], int &, int, int);

using namespace std;


const int m(50);
const int q(100);

int main()
{


	cout << setfill('-') << setw(119) << "-" << endl;

	if (0)
	{	//Nhap truyen thong co ban
		int a[m], n;
		cout << "Day la chuong trinh nhap mang mot chieu truyen thong co ban" << endl;
		cout << setw(119) << '-' << endl;
		cout << "Moi ban nhap vao so phan tu cua mang muon khoi tao:  ";
		n = NhapN();
		cout << "Moi ban nhap gia tri cho tung phan tu: " << endl;
		NhapMangTruyenThong(a, n);
		cout << setw(119) << "-" << endl;
		cout << "Mang ban vua nhap la: " << endl;
		XuatMang(a, n);
	}

	if (0)
	{	//Phat sinh so ngau nhien tu 0 toi...
		int a[m], n;
		srand((unsigned)time(NULL)); //Khoi tao bo phat sinh so ngau nhien lai (neu k co van duoc nhung lan sau goi lai van la mang vs cac so ngau nhien cu...co cai nay se tao ngau nhien moi lien tuc)
		cout << "Day la chuong trinh khoi tao gia tri ngau nhien cho mang mot chieu tu 0 den ..." << endl;
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap vao so phan tu cua mang muon khoi tao:  ";
		n = NhapN();
		NhapMangNgauNhienCoBan(a, n);
		cout << setw(119) << "-" << endl;
		cout << "Mang vua khoi tao la: " << endl;
		XuatMang(a, n);
	}


	if (0)
	{ //Phat sinh so ngau nhien tu 0 toi b
		int a[m], n, b;
		srand((unsigned)time(NULL));
		cout << "Day la chuong trinh khoi tao gia tri ngau nhien cho mang mot chieu tu 0 den b" << endl;
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap vao so phan tu cua mang muon khoi tao:  ";
		n = NhapN();
		cout << "Moi ban nhap vao gia tri ngau nhien lon nhat muon tao: ";
		b = NhapN();
		NhapMangNgauNhienTu0ToiB(a, n, b);
		cout << setw(119) << "-" << endl;
		cout << "Mang vua khoi tao la: " << endl;
		XuatMang(a, n);
	}

	if (1)
	{  //Phat sinh so ngau nhien tu a toi b
		int a[m], n, b, c;
		srand((unsigned)time(NULL));
		cout << "Day la chuong trinh khoi tao gia tri ngau nhien cho mang mot chieu tu a toi b" << endl;
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap vao so phan tu cua mang muon khoi tao:  ";
		n = NhapN();
		cout << "Moi ban nhap vao gia tri dau tien muon khoi tao:  ";
		b = NhapN();
		cout << "Moi ban nhap vao gia tri cuoi cung muon khoi tao:  ";
		c = NhapN();
		NhapMangNgauNhienTuAToiB(a, n, b, c);
		cout << setw(119) << "-" << endl;
		cout << "Mang vua khoi tao la: " << endl;
		XuatMang(a, n);
	}

	if (0)
	{	//Phat sinh so ngau nhien am tu 0 toi ...
		int a[m], n;
		srand((unsigned)time(NULL));
		cout << "Day la chuong trinh khoi tao gia tri ngau nhien am cho mang mot chieu tu am den 0" << endl;
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap vao so phan tu cua mang muon khoi tao:  ";
		n = NhapN();
		NhapMangNgauNhienAmCoBan(a, n);
		cout << setw(119) << "-" << endl;
		cout << "Mang vua khoi tao la: " << endl;
		XuatMang(a, n);
	}

	if (0)
	{	//Phat sinh mang ngau nhien am tu -b toi 0
		int a[m], n, b;
		cout << "Day La chuong trinh khoi tao gia tri ngau nhien am cho mang mot chieu tu -b toi 0 " << endl;
		cout << setw(119) << "-" << endl;
		srand((unsigned)time(NULL));
		cout << "Moi ban nhap vao so phan tu cua mang muon khoi tao:  ";
		n = NhapN();
		cout << "Moi ban nhap vao so gia tri bat dau (kieu duong):  ";
		b = NhapN();
		NhapMangNgauNhienAmTuAmBToi0(a, n, b);
		cout << setw(119) << "-" << endl;
		cout << "Mang vua khoi tao la: " << endl;
		XuatMang(a, n);
	}

	if (0)
	{	// Phat sinh mang ngau nhien am tu -a toi -b
		int a[m], n, b, c;
		cout << "Day La chuong trinh khoi tao gia tri ngau nhien am cho mang mot chieu tu -b toi -c " << endl;
		cout << setw(119) << "-" << endl;
		srand((unsigned)time(NULL));
		cout << "Moi ban nhap vao so phan tu cua mang muon khoi tao:  ";
		n = NhapN();
		cout << "Moi ban nhap vao gia tri dau tien muon khoi tao:  ";
		b = NhapN();
		cout << "Moi ban nhap vao gia tri cuoi cung muon khoi tao:  ";
		c = NhapN();
		NhapMangNgauNhienAmTuAmAToiAmB(a, n, b, c);
		cout << setw(119) << "-" << endl;
		cout << "Mang vua khoi tao la: " << endl;
		XuatMang(a, n);
	}

	if (0)
		//Chuong trinh tinh trung binh cong so am va trung binh cong so duong trong mang
	{
		int a[m], n;
		float tbd, tba;
		cout << "Day La chuong trinh Tinh Trung Binh cong cac so am va Trung Binh cong cac so am cua mang: " << endl;
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap vao so phan tu cua mang muon khoi tao:  ";
		n = NhapN();
		NhapMang(a, n);
		cout << "Mang vua nhap la:" << endl;
		XuatMang(a, n);
		cout << setw(119) << "-" << endl;
		TrungBinhCong(a, n, tba, tbd);
		if (tbd > 0)
		{
			cout << "Trung binh cac so duong trong mang la: " << tbd << endl;
		}
		else
		{
			cout << "Trong mang tren khong co so duong..." << endl;
		}

		if (tba < 0)
		{
			cout << "Trung binh cac so am trong mang la: " << tba << endl;
		}
		else
		{
			cout << "Trong mang tren khong co so am..." << endl;
		}


	}

	if (0)
		//Chuong trinh Max,Min cua mang ngau nhien (cho nhanh khoi nhap thich nhap thi dung ham nhap thu 1);
	{
		int a[m], n;
		cout << "Day La chuong trinh khoi Sap xep tang va giam cua mang: " << endl;
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap vao so phan tu cua mang muon khoi tao:  ";
		n = NhapN();
		NhapMang2(a, n);
		cout << "Mang vua khoi tao la:" << endl;
		XuatMang(a, n);
		cout << setw(119) << "-" << endl;
		cout << "Gia tri max cua mang la: " << MaxMang(a, n) << endl;
		cout << "Gia tri min cua mang la: " << MinMang(a, n) << endl;

	}

	if (0)
	{
		//Chuong trinh sap xep tang giam cua mang ngau nhien (cho nhanh khoi nhap thich nhap thi dung ham nhap thu 1);
		int a[m], n;
		cout << "Day La chuong trinh khoi Sap xep tang va giam cua mang: " << endl;
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap vao so phan tu cua mang muon khoi tao:  ";
		n = NhapN();
		NhapMang2(a, n);
		cout << "Mang vua khoi tao la:" << endl;
		XuatMang(a, n);
		cout << setw(119) << "-" << endl;
		SapXepTang(a, n);
		cout << "Mang sau khi sap xep Tang la: " << endl;
		XuatMang(a, n);
		SapXepGiam(a, n);
		cout << "Mang sau khi sap xep giam la: " << endl;
		XuatMang(a, n);
	}
	if (0)
		//mang vs cac kieu so
	{
		int a[m], n;
		cout << "Day La chuong trinh Lien quan den mang vs cac kieu so: " << endl;
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap vao so phan tu cua mang muon khoi tao:  ";
		n = NhapN();
		NhapMang(a, n);
		cout << "Mang vua khoi tao la:" << endl;
		XuatMang(a, n);
		cout << setw(119) << "-" << endl;
		cout << "Cac so nguyen to cua mang vua nhap la: ";
		XuatSoNguyenTo(a, n);
		cout << endl << "Cac so chinh phuong trong mang la: ";
		XuatSoChinhPhuong(a, n);
		cout << endl << "Cac so hoan hao trong mang la: ";
		XuatSoHoanHao(a, n);
		cout << endl << "Cac so chan trong mang la: ";
		XuatSoChan(a, n);
		cout << endl << "Cac so le trong mang la: ";
		XuatSoLe(a, n);
		cout << endl << setw(119) << "-" << endl;
		cout << endl << "Cac so nguyen to Chan: ";
		XuatSoNguyenToChan(a, n);
		cout << endl;
		cout << "Cac so Nguyen to le: ";
		XuatSoNguyenToLe(a, n);
		cout << endl;
		cout << "Cac So chinh phuong chan: ";
		XuatSoChinhPhuongChan(a, n);
		cout << endl;
		cout << "Cac So chinh phuong le: ";
		XuatSoChinhPhuongLe(a, n);
		cout << endl;
		cout << "Cac So hoan thien chan: ";
		XuatSoHoanThienChan(a, n);
		cout << endl;
		cout << "Cac So hoan thien le: ";
		XuatSoHoanThienLe(a, n);
		cout << endl;

	}

	if (0)
	{
		cout << "Day La chuong trinh Tach mang doi: " << endl;
		cout << setw(119) << "-" << endl;
		int a[m], b[m], c[m], l, n, k;
		cout << "Moi ban nhap vao so luong phan tu mang a: ";
		n = NhapN();
		NhapMangAB(a, n, 'a');
		TachDoi(a, n, b, k, c, l);
		cout << setw(119) << "-" << endl;
		cout << "Mang nua dau la: " << endl;
		XuatMangAB(b, k, 'c');
		cout << "Mang nua sau la: " << endl;
		XuatMangAB(c, l, 'l');
	}

	if (0)
	{
		cout << "Day La chuong trinh Tach mang chan mang le: " << endl;
		cout << setw(119) << "-" << endl;
		int a[m], b[m], c[m], l, n, k;
		cout << "Moi ban nhap vao so luong phan tu mang a: ";
		n = NhapN();
		NhapMangAB(a, n, 'a');
		TachChanLe(a, n, b, k, c, l);
		cout << setw(119) << "-" << endl;
		cout << "Mang chan la: " << endl;
		XuatMangAB(b, k, 'c');
		cout << "Mang le la: " << endl;
		XuatMangAB(c, l, 'l');
	}

	if (0)
	{
		int a[m], b[m], c[q], l, n, k;
		cout << "Day La chuong trinh gop mang: " << endl;
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap vao so luong phan tu mang a: ";
		n = NhapN();
		NhapMangAB(a, n, 'a');
		cout << "Moi ban nhap vao so luong phan tu mang b: ";
		k = NhapN();
		NhapMangAB(b, k, 'b');
		cout << setw(119) << "-" << endl;
		GhepNoi(c, l, a, n, b, k);
		cout << " Mang sau khi ghep xen ke theo cach 1 la: " << endl;
		XuatMangAB(c, l, 'c');
	}

	if (0)
	{
		int a[m], b[m], c[q], l, n, k, d[q], j, o[q], f;
		cout << "Day La chuong trinh gop mang xen ke: " << endl;
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap vao so luong phan tu mang a: ";
		n = NhapN();
		NhapMangAB(a, n, 'a');
		cout << "Moi ban nhap vao so luong phan tu mang b: ";
		k = NhapN();
		NhapMangAB(b, k, 'b');
		l = n + k;
		cout << setw(119) << "-" << endl;
		GhepXenKe(c, l, a, n, b, k);
		cout << " Mang sau khi ghep xen ke theo cach 1 la: " << endl;
		XuatMangAB(c, l, 'c');
		cout << setw(119) << "-" << endl;
		cout << " Mang sau khi gop xen ke theo cach 2 la: " << endl;
		GhepXenKe2(d, j, a, n, b, k);
		XuatMangAB(d, j, 'd');
		cout << setw(119) << "-" << endl;
		cout << " Mang sau khi gop xen ke theo cach 3 la: " << endl;
		GhepXenKe3(o, f, a, n, b, k);
		XuatMangAB(o, f, 'd');
	}

	if (0)
	{
		int a[m], n, b[m], l, x, dem, z;
		cout << "Day La chuong trinh Tim Kiem Phan Tu: " << endl;
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap vao so phan tu cua mang muon khoi tao:  ";
		n = NhapN();
		NhapMang(a, n);
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap vao so muon tim kiem: ";
		cin >> x;
		TimKiemX(a, n, x, b, l, dem);
		if (dem == 0)
		{
			cout << "So " << x << " ban tim khong xuat hien trong day";
		}
		else
		{
			cout << "So " << x << " ban tim xuat hien " << dem << " lan trong day, o vi tri: ";
			XuatMangDeLamHamTimKiem(b, l);
		}
		cout << endl << setw(119) << "-" << endl;
		cout << endl << "Nhap Vi tri muon xoa phan tu nao: ";
		cin >> z;
		if (z < n - 1 && z > 0)
		{
			XoaPhanTu(a, n, z);
			cout << "Mang sau khi xoa la: " << endl;
			XuatMang(a, n);
		}
		else
		{
			cout << "Vi tri ban nhap khong co trong mang";
		}

	}

	if (0)
	{
		int a[m], n, x;
		cout << "Day La chuong trinh Xoa phan tu mang (du co trung): " << endl;
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap vao so phan tu cua mang muon khoi tao:  ";
		n = NhapN();
		NhapMang(a, n);
		cout << setw(119) << "-" << endl;
		cout << "Nhap vao phan tu muon xoa: ";
		cin >> x;
		XoaPhanTuChon(a, n, x);
		cout << "Mang sau khi xoa la: " << endl;
		XuatMang(a, n);
	}

	if (0)
	{
		int a[m], n;
		cout << "Day La chuong trinh Xoa Trung Mang: " << endl;
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap vao so phan tu cua mang muon khoi tao:  ";
		n = NhapN();
		NhapMang(a, n);
		XoaTrung(a, n);
		cout << setw(119) << "-" << endl;
		cout << "Mang sau khi da xoa trung la: " << endl;
		XuatMang(a, n);
	}

	if (0)
	{
		int a[m], n;
		cout << "Day La chuong trinh Xoa Trung Mang truc tiep: " << endl;
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap vao so phan tu cua mang muon khoi tao:  ";
		n = NhapN();
		NhapMang(a, n);
		XoaTrungMangTrucTiep(a, n);
		cout << setw(119) << "-" << endl;
		cout << "Mang sau khi da xoa trung truc tiep la: " << endl;
		XuatMang(a, n);
	}

	if (0)
	{
		int a[m], n, v, m;
		cout << "Day La chuong trinh chen v vao vi tri m cua mang: " << endl;
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap vao so phan tu cua mang muon khoi tao:  ";
		n = NhapN();
		NhapMang(a, n);
		cout << setw(119) << "-" << endl;
		cout << "Moi ban nhap gia tri muon chen: ";
		cin >> v;
		cout << "Moi ban nhap vao vi tri muon chen: ";
		cin >> m;
		Chen(a, n, v, m);
		cout << setw(119) << "-" << endl;
		cout << " Mang sau khi chen la: " << endl;
		XuatMang(a, n);
	}

	system("pause");
	return 0;
}


void NhapMangTruyenThong(int a[], int &n)
{
	int i = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}

void NhapMangNgauNhienCoBan(int a[], int &n)
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = rand();
	}
}

void NhapMangNgauNhienTu0ToiB(int a[], int &n, int b)
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % b;
	}
}

void NhapMangNgauNhienTuAToiB(int a[], int &n, int b, int c)
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % (c - b + 1) + b;  //(b-a+1)+a
	}
}

void NhapMangNgauNhienAmCoBan(int a[], int &n)
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = rand()* -1;
	}
}

void NhapMangNgauNhienAmTuAmBToi0(int a[], int &n, int b)
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % b *-1;
	}
}

void NhapMangNgauNhienAmTuAmAToiAmB(int a[], int &n, int b, int c)
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = (rand() % (c - b + 1) + b) *-1;
	}
}

void XuatMang(int a[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=" << a[i] << endl;
	}
}

void XuatMangDeLamHamTimKiem(int a[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		cout << " " << a[i] << " ";
	}
}

int NhapN()
{
	int n;
	do {
		cin >> n;
		if (n <= 0)
		{
			cout << "So ban nhap phai lon hon 0...vui long nhap lai: ";
		}

	} while (n <= 0);

	return n;
}


void TrungBinhCong(int a[], int n, float &tbcA, float &tbcD) // chu y minh se lay hai bien tbcA va tbcD ra nen lam cach nay, cach kha hay nen hoc neu muon lay gia tri hai bien trong 1 ham;
{															//Tham bien
	int i;
	int tongA(0), tongD(0);
	int demD(0), demA(0);

	for (i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			demD++;
			tongD += a[i];

		}
		else
		{
			demA++;
			tongA += a[i];

		}
	}

	if (demD > 0)
	{
		tbcD = (float)tongD / demD;
	}
	else
	{
		tbcD = 0;
	}

	if (demA > 0)
	{
		tbcA = (float)tongA / demA;
	}
	else
	{
		tbcA = 0;
	}
}


int MaxMang(int a[], int n)
{
	int max = a[0];
	int i;
	for (i = 1; i < n; i++) //chu y i=1(tai sao thi doc code k thoi sai)
	{
		if (a[i] > max)

		{
			max = a[i];
		}
	}
	return max;
}

int MinMang(int a[], int n)
{
	int min = a[0];
	int i;
	for (i = 1; i < n; i++) //chu y i=1(tai sao thi doc code k thoi sai)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}

void HoanVi(int &a, int &b)
{
	int c(0);
	c = a;
	a = b;
	b = c;
}

void SapXepTang(int a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j<n; j++)
		{
			if (a[i] > a[j])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}

void SapXepGiam(int a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[j] > a[i])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}


bool SoNguyenTo(int n)
{
	int i;
	/*if (n <= 1)
	{
	return false;
	}
	*/
	if (n == 2)
	{
		return true;
	}

	for (i = 2; i < (n / 2); i++)
	{
		if (n%i != 0 && (SoChinhPhuong(n) == false)) // Luu y neu khong sai bien flag (bien dem) thi phai luu y truong hop so chinh phuong:))
		{
			return true;
		}
		else
		{
			return false;
		}

	}
}

void XuatSoNguyenTo(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (SoNguyenTo(a[i]) == true)
		{
			cout << a[i] << "\t";
		}
	}
}

bool SoChinhPhuong(int n)
{
	if (sqrt(n) == (int)sqrt(n))
	{
		return true;
	}
	else return false;
}

void XuatSoChinhPhuong(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (SoChinhPhuong(a[i]) == true)
		{
			cout << a[i] << "\t";
		}
	}
}

bool SoHoanHao(int n)
{
	int i;
	int tong = 0;
	for (i = 1; i < n; i++)
	{
		if (n%i == 0)
		{
			tong += i;
		}
	}
	if (tong == n)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void XuatSoHoanHao(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (SoHoanHao(a[i]) == true)
		{
			cout << a[i] << "\t";
		}
	}
}

void XuatSoLe(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			cout << a[i] << "\t";
		}
	}
}

void XuatSoChan(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << "\t";
		}
	}
}



void XuatSoNguyenToChan(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (SoNguyenTo(a[i] == true) && (a[i] % 2 == 0))
		{
			cout << a[i] << "\t";
		}
	}
}

void XuatSoNguyenToLe(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (SoNguyenTo(a[i]) && (a[i] % 2 != 0))
		{
			cout << a[i] << "\t";
		}
	}
}

void XuatSoChinhPhuongChan(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (SoChinhPhuong(a[i]) && (a[i] % 2 == 0))
		{
			cout << a[i] << "\t";
		}
	}
}

void XuatSoChinhPhuongLe(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (SoChinhPhuong(a[i]) && (a[i] % 2 != 0))
		{
			cout << a[i] << "\t";
		}
	}
}

void XuatSoHoanThienChan(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (SoHoanHao(a[i]) && (a[i] % 2 == 0))
		{
			cout << a[i] << "\t";
		}
	}
}

void XuatSoHoanThienLe(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (SoHoanHao(a[i]) && (a[i] % 2 != 0))
		{
			cout << a[i] << "\t";
		}
	}
}

void NhapMangAB(int a[], int &n, char c)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << c << "[" << i << "]: ";
		cin >> a[i];
	}

}

void XuatMangAB(int a[], int n, char c)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		cout << c << "[" << i << "]=" << a[i] << endl;
	}
}

void TachDoi(int a[], int n, int b[], int &k, int c[], int &l)
{
	int i;
	k = l = 0;
	for (i = 0; i < n / 2; i++)
	{
		b[k++] = a[i];
	}
	for (i = n / 2; i < n; i++)
	{
		c[l++] = a[i];
	}
}

void TachChanLe(int a[], int n, int b[], int &k, int c[], int &l)
{
	k = l = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			b[k++] = a[i];
		}
		else
		{
			c[l++] = a[i];
		}
	}
}

void GhepNoi(int a[], int &n, int b[], int k, int c[], int l)
{
	int i;
	n = 0;
	for (i = 0; i < k; i++)
	{
		a[n++] = b[i];
	}
	for (i = 0; i < l; i++)
	{
		a[n++] = c[i];
	}
}

void GhepXenKe(int a[], int &n, int b[], int k, int c[], int l)
{
	int i, j;
	for (i = j = 0; i < k || i < l; i++)
	{
		if (i < k) a[j++] = b[i];
		if (i < l) a[j++] = c[i];
	}
}

void GhepXenKe3(int a[], int &n, int b[], int k, int c[], int l) // cach nay la cach toi uu
{
	int i;
	for (i = n = 0; i < k || i < l; i++)
	{
		if (i < k) a[n++] = b[i];
		if (i < l) a[n++] = c[i];
	}
}

void GhepXenKe2(int a[], int &n, int b[], int k, int c[], int l)
{
	int i, j;
	i = j = n = 0;
	while ((i < k) && (j < l))
	{
		if (n % 2 == 0)
		{
			a[n++] = b[i++];
		}
		else
		{
			a[n++] = c[j++];
		}
	}

	while (i < k)
	{
		a[n++] = b[i++];
	}

	while (j < l)
	{
		a[n++] = c[j++];
	}
}

void XoaTrungMangTrucTiep(int a[], int &n)
{
	int i, k;
	int j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{											// co the dung nhu the nay (nguoc)
				for (k = j; k < n - 1; k++)              // for (k = j + 1; k < n; k++)
				{                                        // 	{
					a[k] = a[k + 1];                       //      a[k - 1] = a[k];
				}                                        //    }
				n--;                                     //     n--;
			}
		}
	}
}

void XoaPhanTu(int a[], int &n, int k)
{
	int i;
	for (i = k; i < n - 1; i++)         // co the code nguoc nhu phan xoa trung truc tiep
	{
		a[i] = a[i + 1];
	}
	--n;
}

void XoaPhanTuChon(int a[], int &n, int x)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			XoaPhanTu(a, n, i);
			i--;
		}
	}
}

void XoaTrung(int a[], int &n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				XoaPhanTu(a, n, j);
				i--;
			}
		}
	}
}


int TimKiemCoBan(int a[], int n, int x) {
	for (int i = 0; i<n; i++) {
		if (a[i] == x) {
			return 1;
		}
	}
	return 0;
}



void TimKiemX(int a[], int n, int x, int b[], int &m, int &dem)
{
	dem = 0;
	m = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			dem++;
			b[m++] = i;
		}
	}
}
.
void Chen(int a[], int &n, int v, int m)
{
	if (m < n - 1)
	{
		int i;
		for (i = n - 1; i >= m; i--)
		{
			a[i + 1] = a[i];
		}
		a[m] = v;
		++n;
	}
	else
	{
		cout << "Vi tri nay khong co trong mang khong chen duoc";
	}
}

int ViTriXCuoi(int a[], int n, int x)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] == x)
			return i;
	}
	return -1;
}

int ViTriXDau(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			return i;
	}
	return -1;
}

int TimVTMin(int a[], int n)
{
	int i, vtmin = 0;
	int min = a[0];
	for (i = 1; i < n; i++)
		if (a[i] < min)
		{
			min = a[i];
			vtmin = i;
		}
	return vtmin;
}

int TimVTMax(int a[], int n)
{
	int i, vtmax = 0;
	int max = a[0];
	for (i = 0; i < n; i++)
		if (a[i] > max)
		{
			max = a[i];
			vtmax = i;
		}
	return vtmax;
}

void VTPTSoNTo(int a[], int n)
{
	bool f = false;
	for (int i = 0; i < n; i++)
		if (KTSNT(a[i]) == true && a[i] > 23)
		{
			if (f == false)
				cout << "\nCac phan tu la So Nguyen To nam o vi tri: \n";
			f = true;
			cout << i << "\t";
		}
	if (f == false)
		cout << "\nKhong co phan tu thoa yeu cau bai toan";
}

//Doi cho phan tu nho nhat va lon nhat trong mang
// void MangNgauNhien(int a[], int n)
// {
// 	srand((unsigned)time(NULL));
// 	for (int i = 0; i < n; i++)
// 		a[i] = rand() % 100 - rand() % 100;
// }

// void XuatMang(int a[], int n)
// {
// 	for (int i = 0; i < n; i++)
// 		cout << a[i] << "\t";
// }

// int VTMin(int a[], int n)
// {
// 	int vt = 0;
// 	;
// 	for (int i = 1; i < n; i++)
// 		if (a[vt] > a[i])
// 			vt = i;
// 	return vt;
// }

// int VTMax(int a[], int n)
// {
// 	int vt = 0;
// 	for (int i = 1; i < n; i++)
// 		if (a[vt] < a[i])
// 			vt = i;
// 	return vt;
// }

// void hoanvi(int &x, int &y)
// {
// 	int q = x;
// 	x = y;
// 	y = q;
// }

// void doicho(int a[], int n)
// {
// 	int min = VTMin(a, n);
// 	int max = VTMax(a, n);
// 	cout << "\nMang da sap xep: \n";
// 	hoanvi(a[min], a[max]);
// }

// void main()
// {
// 	int n, a[MAX], min, max;

// 	cout << "So luong phan tu thuc su: ";
// 	cin >> n;

// 	//NhapMang(a,n);

// 	MangNgauNhien(a, n);
// 	XuatMang(a, n);

// 	cout << "\nSo nho nhat: " << a[VTMin(a, n)];

// 	cout << "\nSo nho nhat: " << a[VTMax(a, n)];

// 	doicho(a, n);
// 	XuatMang(a, n);

// 	cout << endl;
// }


// Viet ham tim vi tri phan tu am lon nhat trong mang.


// #include<iostream>
// #include<time.h>
// #define MAX 100
// using namespace std;


// void MangNgauNhien(int a[], int n)
// {
// 	srand((unsigned)time(NULL));
// 	for(int i=0; i<n; i++)
// 		a[i]=rand() % 100 - rand() % 100;
// }

// void XuatMang(int a[], int n)
// {
// 	for(int i=0; i<n; i++)
// 		cout<< a[i] <<"\t";
// }

// int VTPTAmDTien81(int a[], int n)
// {
// 	{
// 		for (int i=0; i<n; i++)
// 		if (a[i]<0)
// 		return i; 
// 	} 
// 	return -1;
// }

// int VTPTAmLonNhat81(int a[], int n)
// {
// 	int i;
// 	int vitrimin=VTPTAmDTien81(a,n);
// 	if(vitrimin!=-1)
// 	{
// 		for(i=vitrimin; i<n; i++)
// 			if(a[i]<0 && a[i]>a[vitrimin])
// 				vitrimin=i;
// 		return vitrimin;
// 	}
// 	return -1;
// }

// void main()
// {
// 	int n, a[MAX];
// 	int AmLonNhat;

// 	cout<<"So luong phan tu thuc su: "; cin>>n;

// 	MangNgauNhien(a,n);
// 	XuatMang(a,n);

// 	AmLonNhat=VTPTAmLonNhat81(a,n);
// 	cout<<"\nSo Am Lon nhat mang nam o vi tri: "<< AmLonNhat;
// 	cout<<endl;
// }