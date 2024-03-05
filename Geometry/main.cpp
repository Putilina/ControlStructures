#include<iostream>
using namespace std;
//#define SQUARE
//#define TREUGOLNIK_1
//#define TREUGOLNIK_2
//#define TREUGOLNIK_3
//#define TREUGOLNIK_4
//#define ROMB
#define ZNAKI
//define T_1
//#define T_2
#define ROMB_3
void main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите количество звездочек:"; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";

		}
		cout << endl;
	}
#endif // SQUARE
#ifdef TREUGOLNIK_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TREUGOLNIK_1
#ifdef TREUGOLNIK_2  

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif TREUGOLNIK_2
#ifdef TREUGOLNIK_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif TREUGOLNIK_3
#ifdef TREUGOLNIK_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << "  ";
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
#endif TREUGOLNIK_4
#ifdef ROMB
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = i + 1; j < n; j++)cout << "  "; cout << "/";
		cout << endl;
	}
#endif ROMB
#ifdef ZNAKI

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if ((i + j) % 2 == 0)cout << " + ";
			else cout << " - ";
		}
		cout << endl;
	}
#endif // ZNAKI

#ifdef T_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;

	}
#endif T_1
#ifdef T_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << "  ";
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}


#endif T_2


	/*Варианты ромба_1
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (i + n == j || j + n == i)cout << "\\";
			else if (n - 1 - i == j || ((n * 2) - i) * 2 == j) cout << "/";
			else cout << "  ";
		}
		cout << endl;


	}
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (i + n == j || j + n == i)cout << "\\";
			else if (n - i % n - 1 == i % n && i + j != n * 2 - 1)cout << "/";
			else cout << "  ";
		}
		cout << endl;
			for (int i = 0; i < n * 2; i++)
			{
				for (int j = 0; j < n * 2; j++)
				{
					if (i + n == j || j + n == i)cout << "\\";
					else if (n - 1 - j % n == i % n && i + j + 1 != n * 2)cout << "/";
					else cout << " ";
					cout << endl;
				}
	}*/
}
//else if (n - 1 - j == i || n * 2 + n - i - 1 == j) cout << "/";



