#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
#ifdef Shooter_1

	char key;
	do
	{
		key = _getch();
		if (key == 119)
			cout << "W" << "-" << "������" << endl;
		else if (key == 115)
			cout << "S" << "-" << "�����" << endl;
		else if (key == 97)
			cout << "A" << "-" << "������" << endl;
		else if (key == 100)
			cout << "D" << "-" << "�������" << endl;
		else if (key == 32)
			cout << "Space" << "-" << "������" << endl;
		else if (key == 13)
			cout << "Enter" << "-" << "�����" << endl;
		else if (key == 27)
			cout << "Escape" << "-" << "�����" << endl;
		else
			cout << "Error" << endl;

	} while (true);
#endif // Shooter_1
#ifdef Shooter_2

	char key;
	key = _getch();
	switch (key)
	{
	case  (119):cout << "������" << endl; break;
	case (115):cout << "�����" << endl; break;
	case (97):cout << "������" << endl; break;
	case (100):cout << "�������" << endl; break;
	case (32):cout << "������" << endl; break;
	case (13):cout << "�����" << endl; break;
	case (27):cout << "�����" << endl; break;
	default:cout << "Error!" << endl;

	}
	main();
}
#endif //Shooter_2

#ifdef ���������

int a;  //�����, �������� � ����������
int revers=0;  //�����, ���������� ��������
cout << "������� �����:"; cin >> a;
int copy = a;//������� ����� ���������� �����
while (copy)
{
	revers *= 10;
	revers += copy % 10;
	copy /= 10;
}
if (revers == a)
{
	cout << "���������" << endl;
}
else
{
	cout << "�� ���������" << endl;
}

main();
}
#endif // ���������
