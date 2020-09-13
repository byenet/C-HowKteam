#include <iostream>
using namespace std;

//Trailing return type syntax in C++11
// hai cach khai bao nay la nhu nhau
int add(int a, int b);
auto add3(int a, int b) -> int;

// a + b co kieu int => ham add() kieu int
auto add2(int a, int b)
{
	return a + b;
}


int add(int a, int b)
{
	return a + b;
}


int main()
{
	// 'K' la kieu char => cKteam kieu char
	auto cKteam = 'K';
	cout << "type of cKteam: " << typeid(cKteam).name() << endl;

	// 1 la kieu int => nKteam kieu int
	auto nKteam = 1;
	cout << "type of nKteam: " << typeid(nKteam).name() << endl;

	// 1.0F la kieu float => fKteam kieu float
	auto fKteam = 1.0F;
	cout << "type of fKteam: " << typeid(fKteam).name() << endl;

	// 1.0 la kieu double => dKteam kieu double
	auto dKteam = 1.0;
	cout << "type of dKteam: " << typeid(dKteam).name() << endl;

	//-------------------------------------------------------------------

	//Tu khoa auto co the duoc dung cho gia tri tra ve cua 1 ham:
	// ham add() return kieu int => bien sum kieu int
	auto sum = (3, 8);
	cout << "type of sum: " << typeid(sum).name() << endl;

	// Tu khoa auto khong the duoc dung lam tham so ham

	system("Pause");
	return 0;
}
