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
	cout << "������� ����������� ��������"; cin >> n;
	while (i < n)
	{
		cout << i++ << "Hello";
		//i++;
	}
#endif WHILE_1 // WHILLE_1

#ifdef WHILE_2

	int n;
	cout << "������� ����������� ��������"; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;

#endif // WHILE_2

#ifdef WHILE_3
	char key;                                       // ��� ���������� ����� ������� 
	// ��� ������� �������
	do
	{
		key = _getch();                             // ������� getch ������� ������� ������� 
		//���������� ASCII - ��� ������� �������
	// ������� _getch() ���������� � ���������� <conio.h>
		cout << (int)key << "\t" << key << endl;
		// (int) key - ����� �������������� 'key' � ��� ������ 'char', 
		// ��� ���� ����� ������� ��� ������� �������
	} while (key != 27);

#endif // WHILE_3

}