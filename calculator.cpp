# include <iostream>
using namespace std;
int main()
{
	cout << "Enter the sign operation" << endl;
	cout << "enter * if the multiplication" << endl;
	cout << "enter - if the subtraction" << endl;
	cout << "entrr + if the addition" << endl;
	cout << "enter / if the division" << endl;
	double a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	char op;
	cin >> op;
	bool ok = true;
	double c;
	switch (op)
	{
	case '*':
	case '.':
		c = a*b;
		break;
	case '-':
		c = a - b;
		break;
	case '/':
	case ':':
		if (b == 0)
			ok = false;
		else
			c = a / b;
		break;
	case '+':
		c = a + b;
		break;
	default:
		ok = false;
	}
		if (ok == true)
			cout << a << " " << op << " " << b << " = " << c << endl;
		else
			cout << "input error!";
		system ("pause");
			return 0;
		}