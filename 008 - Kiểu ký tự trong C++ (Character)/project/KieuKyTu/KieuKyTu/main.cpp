#include <iostream>
using namespace std;

int main(){

	char ch1{ 'K' };// Khoi tao bien character voi ky tu 'K' (ma ASCII 75)
	char ch2{ 75 };	// khoi tao bien character voi ma ASCII 75 (ky tu 'K')
	char ch3(75);	// khoi tao bien character voi ma ASCII 75 (ky tu 'K')
	char ch4 = 'K';	// khoi tao bien character voi ky tu 'K' (ma ASCII 75)
	char ch5;	// khai bao bien kieu character
	ch1 = 75;	// gan ma ASCII 75 (ky tu 'K') cho bien character

	char ch6{ 75 };	// ma ASCII 75 (ky tu 'K')
	char ch7{ 'K' };	// ky tu 'K' (ma ASCII 75)

	char ch8{ '7' };	// khoi tao bien character voi ky tu '7' (ma ASCII 55)
	char ch9{ 7 };	// khoi tao bien character voi ma ASCII 7 (tieng “beep”)


	char ch10{ 75 };	// ma ASCII 75 (ky tu 'K') 
	cout << ch10 << endl;	// ky tu 'K' voi ma ASCII 75 duoc hien thi ra man hinh

	char ch11{ 'K' };	// ký tự 'K' (mã ASCII 75)
	cout << ch11 << endl;	// ky tu 'K' truc tiep duoc hien thi ra man hinh

	int n{ 75 };
	cout << static_cast<char>(n) << endl; // in ky tu voi ma ASCII 75

	char ch12{ 'K' };
	cout << static_cast<int>(ch12) << endl; // in ma ASCII cua ky tu 'K'

	cout << "Howkteam.com\nFree Education"; // '\n' di chuyen con tro xuong mot dong moi

	cout << "Tab 1\tTab 2 "; // '\t' di chuyen con tro 1 tab

	std::cout << "HowKteam.com" << std::endl;
	std::cout << "Free education\n";

	std::cout << "HowKteam.com" << std::endl;

	// Tuong duong voi:

	std::cout << "HowKteam.com\n" << std::flush;

	system("Pause");
	return 0;
}