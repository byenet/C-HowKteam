#include <iostream>
using namespace std;

int main(){

	for (int i = 10; i > 0; i--) {
		cout << i << ' ';
	}
	// Output: 10 9 8 7 6 5 4 3 2 1  

	for (int i = 10; i < 20; i = i + 2) {
		cout << i << ' ';
	}
	// Output: 10 12 14 16 18  


	// -------------------------------------------
	// For thieu
	int count = 0;
	for (; count < 10; )
	{
		cout << count << " ";
		++count;
	}

	//----------------------------------------------
	// For long
	for (int i = 0; i <= 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	//----------------------------------------------
	// While true  

	for (;;)
	{
		cout << "infinite loop";
	}

	// ---------------------------------------------
	for (int i = 5, j = 10; i + j < 20; i++, j++)
	{
		cout << i << " + " << j << " = " << (i + j) << '\n';
	}

	system("Pause");
	return 0;
}