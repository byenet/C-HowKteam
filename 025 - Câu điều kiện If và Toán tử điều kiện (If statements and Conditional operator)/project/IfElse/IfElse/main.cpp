#include <iostream>
#include <string>

using namespace std;

int main() {


	const string PASSWORD("howkteam.com");
	const string USERNAME("howkteam.com");
	string password;
	string userName;

	cout << "Enter password: ";
	getline(cin, password);

	if ((userName == USERNAME) && (password == PASSWORD))
	{
		cout << "Login succeed!" << endl;
		cout << "Hello howkteam.com!" << endl;
		cout << "Free education!" << endl;
		// ...
	}
	else
	{
		cout << "Login failed!" << endl;
		cout << "Hello howkteam.com!" << endl;
		cout << "Free education!" << endl;
		// ...
	}

	// ---------------------------------------------

	cout << "Nhap so ban yeu thich (1, 2, 3): ";
	int n;
	cin >> n;

	if (n == 1)
		cout << "Ban that dep trai!" << endl;
	else if (n == 2)
		cout << "Ban qua dep trai!" << endl;
	else if (n == 3)
		cout << "Ban dep trai vo dich vu tru!" << endl;
	else
		cout << "Du lieu chua chinh xac!" << endl;


	// -------------------------------------------------

	// toan tu 3 ngoi
	int a(10), b(20);
	int max = (a > b) ? a : b;

	// Cách 1
	(1 > 0) ? (cout << 1 << endl) : (cout << 0 << endl);
	// Cách 2
	cout << ((1 > 0) ? 1 : 0) << endl;



	system("Pause");
	return 0;
}