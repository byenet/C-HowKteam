#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

#include <random> // for random in c++ 11
using namespace std;

int main(){
	// initialize random number generator
	srand(time(0)); // set initial seed value to system clock

					// generate random number
					// ...

	int v1 = rand();		// v1 in the range 0 to 32767
	int v2 = rand() % 100;		// v2 in the range 0 to 99
	int v3 = rand() % 100 + 1;	// v3 in the range 1 to 100
	int v4 = rand() % 30 + 1985;	// v4 in the range 1985-2014

	int nSecret, nGuess;

	// initialize random seed
	srand(time(NULL)); // Or 0

	// generate secret number between 1 and 10
	nSecret = rand() % 10 + 1;

	do {
		cout << "Guess the number (1 to 10): ";
		cin >> nGuess;

		if (nSecret < nGuess)
			cout << "The secret number is lower" << endl;
		else if (nSecret > nGuess)
			cout << "The secret number is higher" << endl;
	} while (nSecret != nGuess);

	cout << "Congratulations!" << endl;

	//---------------------------------------------------------
	srand(time(0)); // set initial seed value to system clock

	for (int count = 0; count < 10; ++count)
	{
		cout << rand() << "\t";

		// If we've printed 5 numbers, start a new row
		if ((count + 1) % 5 == 0)
			cout << endl;
	}

	// ----------------------------------------------------------
	//   Random in c++ 11
	random_device rd;	// only used once to initialize (seed) engine
	mt19937 rng(rd());	// random-number engine used (Mersenne-Twister in this case)

						// output 10 random number
	for (int i = 0; i < 10; i++)
	{
		auto random_integer = rng();
		cout << random_integer << "\t";

		if ((i + 1) % 5 == 0)
			cout << endl;
	}

	// output 10 random number in the range 1 to 100 
	uniform_int_distribution<int> uni(1, 100);
	for (int i = 0; i < 10; i++)
	{
		auto random_integer = uni(rng);
		cout << random_integer << "\t";

		if ((i + 1) % 5 == 0)
			cout << endl;
	}


	system("Pause");
	return 0;
}