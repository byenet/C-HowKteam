#include <iostream>
using namespace std;

int main() {

	//Con tro hang 
	const int value = 10;
	const int *ptr = &value; // ptr la con tro hang
	//*ptr = 20; // loi bien dich: you cannot assign to a variable that is const
	//--------
	int value1 = 10;
	const int *ptr1 = &value1; // ptr1 la con tro hang
	value1 = 20; // ok
	//*ptr1 = 20; // loi, vi ptr la con tro hang
	//--------
	int value2 = 5;
	const int *ptr2 = &value1; // ptr la con tro hang

	int value3 = 6;
	ptr2 = &value3; // con tro hang co the tro den dia chi khac
	//-------------------------------------------------------------------------

	//Hang con tro
	int value4 = 10;
	int value5 = 20;

	int *const ptr3 = &value4; // ptr la hang con tro
	//ptr3 = &value5; // loi bien dich, dia chi hang con tro tro den khong the thay doi
	//-------
	int value6 = 10;
	// ptr3 = &value6; // ptr khong the thay doi dia chi vung nho no luu tru
	*ptr3 = 20; // nhung ptr co the thay doi gia tri vung nho no tro den

	//---------------------------------------------------------------------------
	// Hang con tro hang
	// Khi ket hop giua hang con tro va con tro hang voi nhau, ta co the co mot con tro vua khong thay doi duoc dia chi vung nho ma no luu tru, vua khong thay doi duoc gia tri cua vung nho do.
	int value7 = 10;
	const int *const ptr4 = &value;




	system("Pause");
	return 0;
}