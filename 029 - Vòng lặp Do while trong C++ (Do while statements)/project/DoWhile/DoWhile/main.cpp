#include <iostream>
#include <string>
using namespace std;

const string ID("kteam");
const string PASSWORD("howkteam.com");

int main(){


	string id;
	string password;

	do
	{
		system("cls");

		cout << "ID: ";
		getline(cin, id);

		cout << "Password: ";
		getline(cin, password);
	} while (id != ID || password != PASSWORD);

	cout << "Login succeed!" << endl;
	// do something

	//-------------------------------------------------------------------

	int selection;

	do
	{
		system("cls");	// clear screen

		cout << "Please make a selection: \n";
		cout << "1) Addition\n";
		cout << "2) Subtraction\n";
		cout << "3) Multiplication\n";
		cout << "4) Division\n";
		cout << "Enter your selection: ";
		cin >> selection;

		if (cin.fail())
		{
			// user didn't input a number
			cin.clear(); // reset failbit
			cin.ignore(32767, '\n'); //skip bad input
		}
	} while (selection < 1 || selection > 4);

	// do something with selection here
	// such as a switch statement

	cout << "You selected option #" << selection << "\n";


	system("Pause");
	return 0;
}