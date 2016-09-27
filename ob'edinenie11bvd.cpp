#include <iostream>
using namespace std;
int main()
{
	cout << "1-1" << endl;
	cout << "2-2" << endl;
	cout << "3-3" << endl;
	int op;
	cin >> op;
	double x, y;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	bool condition;
	switch (op)
	{
	case 1:
		condition = ((x - 1)*(x - 1) + y*y <= 1) && (y <= x) && (y >= (-0.5));
			break;
	case 2:
		condition = ((y > 0 && x > 0 && (x*x + y*y) <= 1) || (x >= 1 && x <= 0 && y >= 1 && y <= 0));
			break;
	case 3: 
		condition = ((x - 1)*(x - 1) + y*y <= 1 && y >= -0.5 && y <= x);
		break;
	default:
		cout << "input error" << endl;
		system("pause");
		return 0;
	}
	if (condition)
		cout << "point belong" << endl;
	else
		cout << "don't belong";
	system("pause");
	return 0;
}

