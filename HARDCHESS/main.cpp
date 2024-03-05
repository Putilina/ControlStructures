//HARDCHESS
//#define TERNARNIK_+-
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер доски:"; cin >> n;
	/*for (int i = 0; i <n; i++)
	{
		for (int j = 0; j <n; j++)
		{
			for (int k = 0; k <n; k++)
			{
				for (int l = 0; l <n; l++)
				{
					cout << (i % 2 == k % 2 ? "* " : "  ");
				}
			}
		cout << endl;
		}
	}*/
#ifdef TERNARNIK_+-
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if (i % 2 ==j % 2)cout << " + ";else if (" - ")cout << " - ";
			//(i % 2 == j % 2) ? cout << "+ " : cout << "- ";     
		//i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
	true;
#endif // TERNARNIK_+-

}