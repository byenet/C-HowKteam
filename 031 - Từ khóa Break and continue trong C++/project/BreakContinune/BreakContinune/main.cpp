#include <iostream>
using namespace std;

int main(){

	// An example of a standard for loop  
	for (int i = 1; i < 10; i++)
	{
		cout << i << '\n';

		// exit loop if i == 4
		if (i == 4)
			break;
	}

	while (true)
	{
		cout << "Enter a number (0 to exit): ";
		int num;
		cin >> num;

		// exit loop if user enters 0
		if (num == 0)
			break;
	}

	//-----------------------------------------------------------
	for (int i = 0; i < 10; ++i)
	{
		// if the number is divisible by 4, skip this iteration
		if ((i % 2) == 0)
			continue; // jump to end of loop body

					  // If the number is not divisible by 4, keep going
		cout << i << endl;

		// The continue statement jumps to here
	}

	int count(0);
	while (count < 10)
	{
		if (count == 5)
			continue; // jump to end of loop body
		cout << count << " ";
		++count;

		// The continue statement jumps to here
	}

	system("Pause");
	return 0;
}