#include <iostream>
using namespace std;

#define NULL 0

int main(){

	float *ptr{ 0 };  // ptr la 1 con tro null

	float *ptr2; // ptr2 la con tro rac
	ptr2 = 0; // ptr2 la 1 con tro null
	//Ta co the su dung mot dieu kien de kiem tra xem mot con tro co null hay khong :
	//double *ptr{ 0 };

	// con tro se chuyen thanh true neu no null, va false neu no khong null
	if (ptr)
		cout << "con tro tro den dia chi.";
	else
		cout << "con tro null.";

	//-------------------------------------------------------------------------------------------
	// Trong C
	//macro NULL (#define NULL 0) khong phai la ky thuat trong C++, vi vay can tranh su dung no trong C++.
	double *ptr2 = NULL; // ptr la 1 con tro null

	/*
			void doSomething(double *ptr)
		{
			// ptr se chuyen thanh true neu no null, va false neu no khong null
			if (ptr)
				std::cout << "You passed in " << *ptr << '\n';
			else
				std::cout << "You passed in a null pointer\n";
		}

		int main()
		{
			doSomething(0); // truyen 0 co the gay nham lan rang tham so ham la so nguyen

			return 0;
		}
	
	
	*/

	// ---------------------------------------------------------------------------------------------
	// trong c++ 11 

	int *ptr11 = nullptr; // ptr la 1 con tro null
	// se khac phuc van de khong nhat quan o C
	//doSomething(nullptr); // truyền con trỏ null vào hàm
	system("Pause");
	return 0;
}