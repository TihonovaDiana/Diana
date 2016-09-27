#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	if (a == 0)
	{
		cout << "error" << endl;
		system("pause");
		return 0;
	}
	if (a == 1)
		cout << "x*x";
	else if (a == -1)
		cout << "-x*x";
	else
		cout << a << "*x*x";

	if (b == 1)
		cout << "+x";
	else if (b==-1)
		cout << "-x";
	if (b > 1)
		cout << "+" << b << "*x";
	else if (b <-1)
		cout << b << "*x";
	if (c > 0)
		cout << "+" << c;
	else if (c<0)
		cout << c << endl;
	if (b == 0 && c == 0)
		cout << "";
	else if (b == 0)
		cout << "";
	else if (c==0)
		cout << "" << endl;
	double D = b*b - 4 * a*c;
	if (D > 0)
	{
		cout << "equation has two roots" << endl;
		system("pause");
		return 0;
	}
	if (D == 0)
	{
		cout << "equation has one roots" << endl;
		system("pause");
		return 0;
	}
	if (D < 0)
	{
		cout << "equation don't has roots" << endl;
		system("pause");
		return 0;
	}
	system("pause");
	return 0;
}
	