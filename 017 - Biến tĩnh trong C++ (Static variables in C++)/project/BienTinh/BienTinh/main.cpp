#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Su dung bien cuc bo
void doSomeThingLocal()
{
	int value(0); // automatic duration by default
	++value;
	cout << value << endl;
} // value is destroyed here


// Su dung bien tinh
// Static duration
void doSomeThing_static()
{
	// static duration via static keyword.  This line is only executed once.
	static int s_value(0);
	++s_value;
	cout << s_value << endl;
} // s_value is not destroyed here, but becomes inaccessible


//--------------------------
int generateID()
{
	static int s_id(0);
	++s_id;
	return s_id;
}

int main()
{
	// Local variables
	cout << "Su dung bien cuc bo!" << endl;
	doSomeThingLocal();
	doSomeThingLocal();
	doSomeThingLocal();

	// Static variables
	cout << endl << "Su dung bien tinh!" << endl;
	doSomeThing_static();
	doSomeThing_static();
	doSomeThing_static();

	// Ap dung tao id
	cout << endl << "Ap dung tao id!" << endl;
	int nID1 = generateID();
	string strName1("Kteam");

	int nID2 = generateID();
	string strName2("FreeEducation");

	int nID3 = generateID();
	string strName3("HowKteam.com");

	cout << nID1 << " : " + strName1 << endl;
	cout << nID2 << " : " + strName2 << endl;
	cout << nID3 << " : " + strName3 << endl;


	system("Pause");
	return 0;
}