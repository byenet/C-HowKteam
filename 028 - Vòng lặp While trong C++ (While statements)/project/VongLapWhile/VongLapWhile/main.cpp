#include <iostream>
using namespace std;

int main() {


	int count(1);
	while (count <= 1000)
	{
		cout << count << " ";
		++count;
	}
	cout << "done!" << endl;


	// ------------------------------------
	//While long
	// Loop between 1 and 5
	int outer(1);
	while (outer <= 5)
	{
		// loop between 1 and outer
		int inner(1);
		while (inner <= outer)
		{
			cout << inner << " ";
			++inner;
		}

		// print a newline at the end of each row
		cout << "\n";
		++outer;
	}


	system("Pause");
	return 0;
}