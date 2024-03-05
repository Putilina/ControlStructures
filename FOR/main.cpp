#include<iostream>
#include<ctime>
using namespace std;
using std::cout;
using std::cin;
using std::endl;


//#define WHILE
//#define FOR_SYNTAX
//#define FACTORIAL_1
//#define FACTORIAL_2
//#define POWER
//#define ASCII
//#define FIBONACCI_1
//#define FIBONACCI_2
//#define SIMPLEX_NUMBERS
//#define  TABLIZA_YMNOGENIA_PIFAGORA
#define MULTIPLICATION_TABLE
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE
	int i = 0;// ������� �����
	int n;//���������� ��������
	cout << "������� ���������� ��������:"; cin >> n;
	while (i < n)
	{
		cout << "Hello\n";
		i++;
	}
#endif // WHILE
#ifdef FOR_SYNTAX

	int e;
	cout << "������� ���������� ��������:"; cin >> e;
	for (
		int i = 0;
		i < e;
		i++
		)
	{
		cout << i << "\t";
	}
	cout << endl;

#endif // FOR_SYNTAX  
#ifdef FAKTORIAL_1
	int n;
	cout << "������� �����:"; cin >> n;
	int factorial = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "!=";
		faktorial *= i;
		cout << faktirial << "\n";
	}
	cout << endl;


#endif // FAKTORIAL_1
#ifdef Factorial_2

	int number;
	int factorial = 1;
	cout << "������� ����� ��� ���������� ����������:"; cin >> number;
	for (int i = 1; i <= number; i++)
	{
		factorial = factorial * i;
	}
	cout << factorial << endl;
#endif // Factorial_2
#ifdef POWER
	double a;       // ��������� �������(base)
	int n;          //���������� �������(exponent)
	double N = 1;   //�������(power)
	cout << "������� ��������� �������:"; cin >> a;  //Enter power base
	cout << "������� ���������� �������:"; cin >> n; //Enter power exponent
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;

#endif // POWER
#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII
#ifdef FIBONACCI_1
	int n;
	cout << "������� ���������� �����:"; cin >> n;
	//Coma operator ,�������� �������
	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACCI_1
#ifdef FIBONACCI_2
	int n;   //������� �����
	int a=0;
	int b=1;
	int c;
	cout << "������� �����:"; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << a << " ";
		c = a + b;
		a = b;
		b = c;
		if (i == n)
			cout << endl;
	}


#endif // FIBONACCI_2

#ifdef SIMPLEX_NUMBERS

	int n; //���������� �����
	cout << "������� ���������� �����:"; cin >> n;
	system("COLOR 0A");
	int simplex_counter = 0;//������� ������� �����=0
	time_t start = clock();
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;//�����������,��� ����� �������,
		//�� ��� ����� ���������:
		for (int j = 2; j <sqrt( i); j++)
			//������� sqrt()���������� ���������� ������ �����
		{
			if (i % j == 0)
			{
				simple = false;
				break;//�������� ����� 'break' ��������� ������� �������� 
				//� ��� �����������
			}
		}
		if (simple)simplex_counter++;
			//cout <<(simplex_counter++, i) << "\t";

	}
	time_t end = clock();
	cout << endl;
	cout << "Amount of simplex numbers:" << simplex_counter << endl;
	cout << "Calculated by: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;


#endif // SIMPLEX_NUMBERS

#ifdef TABLIZA_YMNOGENIA_PIFAGORA


	for (int i = 1; i <= 10; i++)
	{
		for (int a = 1; a < =10; a++)

			cout << " " << i * a << "\t";

	     cout << " "<< endl;
	}
	

#endif TABLIZA_YMNOGENIA_PIFAGORA
#ifdef MULTIPLICATION_TABLE
	for (int i = 1; i <=10; i++) // Outer for
	{
		cout << "������� ��������� �� " << i << ":\n";
		for (int j = 1;j<=10; j++)  // Inner for
		{
			if (i < 10)cout << " ";
			cout << i << "*";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
		}
	}



#endif // MULTIPLICATION_TABLE

}



	
	





