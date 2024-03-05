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
			cout << "W" << "-" << "Вперед" << endl;
		else if (key == 115)
			cout << "S" << "-" << "Назад" << endl;
		else if (key == 97)
			cout << "A" << "-" << "Налево" << endl;
		else if (key == 100)
			cout << "D" << "-" << "Направо" << endl;
		else if (key == 32)
			cout << "Space" << "-" << "Прыжок" << endl;
		else if (key == 13)
			cout << "Enter" << "-" << "Огонь" << endl;
		else if (key == 27)
			cout << "Escape" << "-" << "Выход" << endl;
		else
			cout << "Error" << endl;

	} while (true);
#endif // Shooter_1
#ifdef Shooter_2

	char key;
	key = _getch();
	switch (key)
	{
	case  (119):cout << "Вперед" << endl; break;
	case (115):cout << "Назад" << endl; break;
	case (97):cout << "Налево" << endl; break;
	case (100):cout << "Направо" << endl; break;
	case (32):cout << "Прыжок" << endl; break;
	case (13):cout << "Огонь" << endl; break;
	case (27):cout << "Выход" << endl; break;
	default:cout << "Error!" << endl;

	}
	main();
}
#endif //Shooter_2

#ifdef Палиндром

int a;  //число, вводимое с клавиатуры
int revers=0;  //число, записанное наоборот
cout << "Введите число:"; cin >> a;
int copy = a;//Создаем копию введенного числа
while (copy)
{
	revers *= 10;
	revers += copy % 10;
	copy /= 10;
}
if (revers == a)
{
	cout << "Палиндром" << endl;
}
else
{
	cout << "НЕ ПАЛИНДРОМ" << endl;
}

main();
}
#endif // Палиндром
