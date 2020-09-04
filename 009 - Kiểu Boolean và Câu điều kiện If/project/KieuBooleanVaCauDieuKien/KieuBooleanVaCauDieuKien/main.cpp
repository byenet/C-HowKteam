#include <iostream>
using namespace std;

int main() {

	bool b1(true);	// true = 1
	bool b2{ false };	// false = 0
	bool b3 = 1;		// 1 = true

	bool b4(!true);	// b1 = NOT true = false (0)
	bool b5{ !false };	// b2 = NOT false = true (1)
	bool b6 = !1;	// b3 = NOT 1 = false (0)

	bool b7{ true };	// b1 is true
	cout << b7 << endl;	// in 1 ra man hinh
	cout << !b7 << endl;	// in 0 ra man hinh

	bool b8{ false };	// b1 is false
	cout << b8 << endl;	// in 0 ra man hinh
	cout << !b8 << endl;	// in 1 ra man hinh

	//moi gia tri khac 0 se mac dinh la true (1)



	cout << std::boolalpha;		// in "true" hoac "false" voi kieu bool
	cout << true << endl;		// in "true" ra man hinh
	cout << false << endl;		// in "false" ra man hinh

	cout << std::noboolalpha;	// in 1 hoac 0 voi kieu bool
	cout << true << endl;		// in 1 ra man hinh
	cout << false << endl;		// in 0 ra man hinh

	bool b9{ true };
	if (b9)
		cout << "b9 is true" << endl;
	else
		cout << "b9 is false" << endl;

	bool b10{ false };
	if (b10)
		cout << "b10 is true" << endl;
	else
		cout << "b10 is false" << endl;


	system("Pause");
	return 0;
}