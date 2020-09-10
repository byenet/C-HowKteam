#include <iostream>
using namespace std;

int main(){

	int n;

tryAgain: // nhan

	cout << "Nhap so nguyen duong:";
	cin >> n;

	if (n < 0)
		goto tryAgain; // nhay den nhan tryAgain

	cout << n << " la so nguyen duong" << endl;

// ----------------------------------------------

	int i(0);

loop: 
	cout << i++ << endl;
	if (i < 100)
		goto loop;

	system("Pause");
	return 0;
}