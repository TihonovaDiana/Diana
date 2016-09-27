#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	if (a <= 0 || b <= 0 || c <= 0)
	{
		cout << "error" << endl;
		system("pause");
		return 0;
	}

	if (a + b <= c || a + c <= b || b + c <= a)
	{
		cout << "error";
		system("pause");
		return 0;
	}
	if (a == b && b == c)
	{
		cout << "equilateral triangle" << endl;
		system("pause");
		return 0;
	}
	if ((a == b) || (b == c) || (a == c))
	{
		cout << "isosceles triangle" << endl;
		system("pause");
		return 0;
	}
	if ((a!=b) && (b!=c))
	{
		cout << "sided triangle" << endl;
		system("pause");
		return 0;
	}
}