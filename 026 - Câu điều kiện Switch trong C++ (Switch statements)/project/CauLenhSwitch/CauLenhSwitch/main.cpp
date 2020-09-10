#include <iostream>
using namespace std;

const int SUNDAY = 1;
const int MONDAY = 2;
const int TUESDAY = 3;
const int WEDNESDAY = 4;
const int THURSDAY = 5;
const int FRIDAY = 6;
const int SATURDAY = 7;

int main()
{
	int dayOfWeek(TUESDAY);

	switch (dayOfWeek)
	{
	case SUNDAY:
		cout << "Sunday" << endl;
		break;
	case MONDAY:
		cout << "Monday" << endl;
		break;
	case TUESDAY:
		cout << "Tuesday" << endl;
		break;
	case WEDNESDAY:
		cout << "Wednesday" << endl;
		break;
	case THURSDAY:
		cout << "Thursday" << endl;
		break;
	case FRIDAY:
		cout << "Friday" << endl;
		break;
	case SATURDAY:
		cout << "Saturday" << endl;
		break;
	default:
		cout << "Unknown" << endl;
		break;
	}

	// ------------------------------------------------------------------------'
	int month;
	cout << "Month: ";
	cin >> month;

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		// Loi: khong duoc phep khoi tao bien khi van con case ben duoi.
		// int year = 2017;

		int day;	// Okay, co the khai bao bien tai day
		day = 30;	// Okay, co the gan gia tri cho bien
		cout << day << endl;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
	{
		int year = 2017;	// Okay: co the khoi tao bien neu su dung khoi lenh
		day = 31;	// Okay, co the su dung bien o nhung case ben duoi
		cout << day << endl;
		break;
	}
	default:
		day = 28;
		cout << day << endl;
	}


	system("Pause");
	return 0;
}