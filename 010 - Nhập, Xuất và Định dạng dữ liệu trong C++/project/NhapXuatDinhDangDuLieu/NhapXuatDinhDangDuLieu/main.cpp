#include <iostream>
#include <iomanip>	// for std::setw(n), std::setfill(ch), std::left, std::right

using namespace std;

int main() {

	cout << "Hello HowKteam.com";

	cout << "Hello HowKteam.com" << endl;	// sử dụng 2 lần toán tử <<

	int n1{ 60 };	// n1 = 60
	int n2{ 9 };	// n2 = 9

					// in chuỗi "Sum: 60 + 9 = 69" và xuống dòng 
	cout << "Sum: " << n1 << " + " << n2 << " = " << n1 + n2 << "\n";

	int n{ 0 };

	// thông báo yêu cầu user nhập tuổi
	cout << "Enter your age: ";

	// đọc giá trị từ console và lưu vào biến n
	cin >> n;

	// in giá trị biến n (tuổi) lên màn hình
	cout << "Your age: " << n << endl;

	int	nDay{ 0 };
	int	nMonth{ 0 };
	int	nYear{ 0 };

	// thông báo yêu cầu user nhập ngày, tháng, năm sinh
	cout << "Enter your birthday: ";

	// đọc giá trị từ console và lưu vào biến nDay, nMonth, nYear
	cin >> nDay >> nMonth >> nYear;

	// in 3 giá trị vừa nhập lên màn hình
	cout << "Your birthday: " << nDay << "/" << nMonth << "/" << nYear << endl;
	
	
	cout << "Kteam Solutions and Entertainment" << endl;
	cout << "HowKteam.com" << endl << endl;

	cout << setw(5) << left << "ID";		// độ rộng 5 ký tự, canh trái ID
	cout << setw(30) << left << "Name";	// độ rộng 30 ký tự, canh trái Name
	cout << setw(20) << right << "Address" << endl;	// độ rộng 20 ký tự, canh phải Address

	cout << setfill('-');		// set fill bằng ký tự '-' thay vì ' '
	cout << setw(55) << "-" << endl;	// fill 55 ký tự '-'

										// reset fill bằng ký tự ' '
	cout << setfill(' ');

	// in thông tin theo format như trên
	cout << setw(5) << left << 1;
	cout << setw(30) << left << "Nguyen Doan Ngoc Giau";
	cout << setw(20) << right << "Sai Gon" << endl;

	cout << setw(5) << left << 2;
	cout << setw(30) << left << "Tran Kim Long";
	cout << setw(20) << right << "Da Lat" << endl;

	cout << setw(5) << left << 3;
	cout << setw(30) << left << "Nguyen Son Tung";
	cout << setw(20) << right << "Dong Nai" << endl;


	int n2;
	cout << "Enter n (hexadecimal): ";
	cin >> hex >> n;	// nhập số thập lục phân (hệ 16)

	cout << "Octal: " << oct << n << endl;	// xuất số bát phân (hệ 8)
	cout << "Decimal: " << dec << n << endl;	// xuất số thập phân (hệ 10)
	
	return 0;

	system("Pause");
	return 0;
}