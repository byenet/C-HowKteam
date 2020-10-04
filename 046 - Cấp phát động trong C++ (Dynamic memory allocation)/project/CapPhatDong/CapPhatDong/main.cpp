#include <iostream>
using namespace std;

int main() {

	new int; // cap phat dong mot so nguyen (kieu du lieu co the thay doi)
	// cap phat dong mot ss nguyen va gan dia chi cho con tro ptr nam giu
	int *ptr = new int;
	*ptr = 10; // gan 10 cho vung nho vua duoc cap phat

	//Khi cap phat dong cho mot bien, ban co the cung luc khoi tao gia tri cho no :
	int *ptr1 = new int(10);

	delete ptr; // tra lai vung nho ptr dang tro den cho he dieu hanh
	ptr = nullptr; // gan ptr thanh con tro null
	delete ptr1;
	ptr1 = nullptr;

	// ----------------------------------------------
	/*
	//Con tro lo lung(Dangling pointers)
	// cap phat dong mot so nguyen va gan dia chi cho con tro ptr nam giu
	int *ptr = new int;
	*ptr = 10; // gan 10 vao vung nho duoc cap phat

	// giai phong vung nho cho he dieu hanh, ptr dang la con tro lo lung
	delete ptr;

	// truy cap vung nho ptr dang tro toi => loi undefined behavior
	cout << *ptr;

	// giai phong vung nho con tro da duoc giai phong truoc do => loi undefined behavior
	delete ptr;

	//--------------------------------
	// co the tao ra nhieu con tro bi lo lung
	int *ptr = new int; // cap phat dong mot so nguyen
	int *otherPtr = ptr; // otherPtr va ptr dang cung tro den mot vung nho

	// giai phong vung nho cho he dieu hanh, ptr va otherPtr dang la con tro lo lung
	delete ptr;

	ptr = nullptr; // ptr dang la con tro null

	// tuy nhien, otherPtr van la con tro lo lung!
	*/

	//------------------------------------------------------------------
	//Con tro null va cap phat dong
	int *ptr2 = new int;
	*ptr2 = 10;

	delete ptr2;
	ptr2 = nullptr;

	// kiem tra con tro truoc khi cap phat
	// neu ptr null (chua duoc cap phat), cap phat ptr
	if (!ptr2)
		ptr2 = new int;
	*ptr2 = 20;

	// khong can kiem tra con tro khi xoa
	// Neu ptr khong null, bien duoc cap phat dong se bi xoa.
	// Neu ptr la null, khong co gi se xay ra.
	delete ptr2;


	system("Pause");
	return 0;
}