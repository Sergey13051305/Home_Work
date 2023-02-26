#include <iostream>
#include <conio.h>

using  namespace  std;
//#define WHILE_1
//#define WHILE_2
//#define WHILE_3

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1

	int i = 0;
	int n;
	cout << "¬ведите колличество итераций"; cin >> n;
	while (i < n)
	{
		cout << i++ << "Hello";
		//i++;
	}
#endif WHILE_1 // WHILLE_1

#ifdef WHILE_2

	int n;
	cout << "¬ведите колличество итераций"; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;

#endif // WHILE_2

#ifdef WHILE_3
	char key;                                       // эта переменна€ будет хранить 
	// код нажатой клавиши
	do
	{
		key = _getch();                             // функци€ getch ожидает нажатие клавиши 
		//возвращает ASCII - код нажатой клавиши
	// ‘ункци€ _getch() находитьс€ в библеотеке <conio.h>
		cout << (int)key << "\t" << key << endl;
		// (int) key - €вное преобразование 'key' в тип данных 'char', 
		// дл€ того чтобы увидеть код нажатой клавиши
	} while (key != 27);

#endif // WHILE_3

}