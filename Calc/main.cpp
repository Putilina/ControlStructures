#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	double a, b;
	char sign;
	a = sign = b = 0;
	cout << "¬ведите выражение:" << endl;
	cin >> a >> sign >> b;
#ifdef CALC_1



	if (sign == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (sign == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (sign == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (sign == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	if (sign != '+' && sign != '-' && sign != '*' && sign != '/')
	{
		cout << "Error: no operation" << endl;
	}
	main();
#endif // CALC_1
#ifdef CALC_2
	switch (sign)
	{
	case '+':cout << a << "+" << b << "=" << a + b << endl; break;
	case '-':cout << a << "-" << b << "=" << a - b << endl; break;
	case '*':cout << a << "*" << b << "=" << a * b << endl; break;
	case '/':cout << a << "/" << b << "=" << a / b << endl; break;
	default:cout << "Error:no operation" << endl;

	}
	main();
#endif // CALC_2
}