#include "BigData.hpp"
using namespace std;

void TestBigData()
{
	BigData b1("12345");
	cout << b1 << endl;

	BigData b2(2738495094736);
	cout << b2 << endl;

	BigData b3("+45345094873265134983726513462789837265146728394093827615239409382717283940326");
	cout << b3 << endl;

	BigData b4("-90965843527079837265146728394093827615239409382717283940327");
	cout << b4 << endl;

	BigData b5("6784765678976563498979237498372615283");
	cout << b5 << endl;

	cout << b3 + b4 << endl;
	cout << b3 - b5 << endl;
	cout << b3 * b5 << endl;
}

void main()
{
	TestBigData();
}
