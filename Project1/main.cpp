#include "Header.h"
#include <conio.h>
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int b, dsize;
	bool flag = true;
	Deque a;
	while (flag)
	{
		cout << "1. �������� ������� � ������ ����\n";
		cout << "2. �������� ������� �� ������ ����\n";
		cout << "3. �������� ������� � ����� ����\n";
		cout << "4. �������� ������� �� ����� ����\n";
		cout << "5. ���������� ������� � ����� ����\n";
		cout << "6. ���������� ������� �� ����� ����\n";
		cout << "7. �����\n";
		switch (_getch()) 
		{
			case '1':
				cout << "�������� �������: ";
				cin >> b;
				a.pushFront(b) ? cout << "������� �������� � ������" << endl : cout << "��� �����\n";
				break;
			case '2':
				a.popFront(b) ? cout << "���������� ������� " << b << endl : cout << "��� ����\n";
				break;
			case '3':
				cout << "�������� �������: ";
				cin >> b;
				a.pushBack(b) ? cout << "������� �������� � ����� " << endl : cout << "��� �����\n";
				break;
			case '4':
				a.popBack(b) ? cout << "���������� ������� " << b << endl : cout << "��� ����\n";
				break;
			case '5':
				a.peekFront(b) ? cout << "���������� ������� " << b << endl : cout << "��� ����\n";
				break;
			case '6':
				a.peekBack(b) ? cout << "���������� ������� " << b << endl : cout << "��� ����\n";
				break;
			case '7':
				flag = false;
				break;

		}
	}

}