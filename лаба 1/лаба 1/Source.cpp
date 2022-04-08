#include "List.h"

/*
* ������� ����:
*/

void menu(my_list cl, List *&Head_1, List *&Tail_1, List *&Head_2, List *&Tail_2)
{
	int choice = 0, element;

	while (choice != 10)
	{
		cout << endl << "---------------------------" << endl;
		cout << endl << "���������� ����������� ������" << endl;
		cout << endl << "---------------------------" << endl;
		cout << "1.������������� ������� ������" << endl;
		cout << "2.����������� ������ � ������������� ������" << endl;
		cout << "3.���������� ���� � ������" << endl;
		cout << "4.���������� ���� � �����" << endl;
		cout << "5.�������� ���� �� ������" << endl;
		cout << "6.�������� ���� �� ������" << endl;
		cout << "7.������ �������� ������" << endl;
		cout << "8.�������� (�����������) ���� ������ � ����� �������" << endl;
		cout << "9.��������� (�� �������) ��� ������ �� ������� ���� � ��������� ������" << endl;
		cout << "10.�����" << endl;
		cout << "������� ��������: ";
		
		while (true)
		{
			cin >> choice;
			if (cin.peek() == '\n') {
				break;
			}
			else {
				cout << "Input error (integer expected):" << endl;
				cin.clear();
				cin.ignore(cin.rdbuf()->in_avail());
			}
		}
		switch (choice)
		{
		case 1:
			cout << "������ ���������������";
			cl.create_node();
			cout << endl;
			break;
		case 2:
			cl.clear(Head_1, Tail_1);
			cout << endl;
			break;
		case 3:
			cout << "������� �������: ";
			cin >> element;
			cl.add_begin(Head_1, Tail_1, element);
			cout << endl;
			break;
		case 4:
			cout << "������� �������: ";
			cin >> element;
			cl.add_after(Head_1, Tail_1, element);
			cout << endl;
			break;
		case 5:
			if (Head_1 == NULL)
			{
				cout << "������ ����, ���������� ������� �������" << endl;
				break;
			}
			cl.delete_HeadElement(Head_1, Tail_1);
			cout << endl;
			break;
		case 6:
			if (Head_1 == NULL)
			{
				cout << "������ ����, ���������� ������� �������" << endl;
				break;
			}
			cl.delete_TailElement(Head_1, Tail_1);
			cout << endl;
			break;
		case 7:
			cl.display_list(Head_1, Tail_1);
			break;
		case 8:
			cl.Copy_Func(Head_1, Head_2, Tail_1, Tail_2);
			break;
		case 9:
			cl.New_List(Head_1, Head_2, Tail_1, Tail_2);
			break;
		case 10:
			break;
		default:
			cout << "������������ �������" << endl;
		}
	}
}

void menu2(my_list cl, List *&Head_1, List *&Tail_1, List *&Head_2, List *&Tail_2)
{
	int choice = 0, element;

	while (choice != 10)
	{
		cout << endl << "---------------------------" << endl;
		cout << endl << "���������� ����������� ������" << endl;
		cout << endl << "---------------------------" << endl;
		cout << "1.������������� ������� ������" << endl;
		cout << "2.����������� ������ � ������������� ������" << endl;
		cout << "3.���������� ���� � ������" << endl;
		cout << "4.���������� ���� � �����" << endl;
		cout << "5.�������� ���� �� ������" << endl;
		cout << "6.�������� ���� �� ������" << endl;
		cout << "7.������ �������� ������" << endl;
		cout << "8.�������� (�����������) ���� ������ � ����� �������" << endl;
		cout << "9.��������� (�� �������) ��� ������ �� ������� ���� � ��������� ������" << endl;
		cout << "10.�����" << endl;
		cout << "������� ��������: ";

		while (true)
		{
			cin >> choice;
			if (cin.peek() == '\n') {
				break;
			}
			else {
				cout << "Input error (integer expected):" << endl;
				cin.clear();
				cin.ignore(cin.rdbuf()->in_avail());
			}
		}
		switch (choice)
		{
		case 1:
			cout << "������ ���������������";
			cl.create_node();
			cout << endl;
			break;
		case 2:
			cl.clear(Head_2, Tail_2);
			cout << endl;
			break;
		case 3:
			cout << "������� �������: ";
			cin >> element;
			cl.add_begin(Head_2, Tail_2, element);
			cout << endl;
			break;
		case 4:
			cout << "������� �������: ";
			cin >> element;
			cl.add_after(Head_2, Tail_2, element);
			cout << endl;
			break;
		case 5:
			if (Head_1 == NULL)
			{
				cout << "������ ����, ���������� ������� �������" << endl;
				break;
			}
			cl.delete_HeadElement(Head_2, Tail_2);
			cout << endl;
			break;
		case 6:
			if (Head_1 == NULL)
			{
				cout << "������ ����, ���������� ������� �������" << endl;
				break;
			}
			cl.delete_TailElement(Head_2, Tail_2);
			cout << endl;
			break;
		case 7:
			cl.display_list(Head_2, Tail_2);
			break;
		case 8:
			cl.Copy_Func(Head_2, Head_1, Tail_2, Tail_1);
			break;
		case 9:
			cl.New_List(Head_2, Head_1, Tail_2, Tail_1);
			break;
		case 10:
			break;
		default:
			cout << "������������ �������" << endl;
		}
	}
}

int main()
{
	int choice;//, element;
	setlocale(LC_ALL, "Rus");
	/// ������ �������� ������ ������:
	List *Head_1 = NULL;
	List *Tail_1 = NULL;
	List *Head_2 = NULL;
	List *Tail_2 = NULL;
	my_list cl;
	my_list cl_2;
	while (1)
	{
		cout << endl << "---------------------------" << endl;
		cout << endl << "�������� ������" << endl;
		cout << endl << "---------------------------" << endl;
		cout << "1.������ �1" << endl;
		cout << "2.������ �2" << endl;
		cout << "3.�����" << endl;
		cout << "������� ��������: ";
		while (true)
		{
			cin >> choice;
			if (cin.peek() == '\n') {
				break;
			}
			else {
				cout << "Input error (integer expected):" << endl;
				cin.clear();
				cin.ignore(cin.rdbuf()->in_avail());
			}
		}
		switch (choice)
		{
		case 1:
		{
			system("cls");
			menu(cl, Head_1, Tail_1, Head_2, Tail_2);
			break;
		}
		case 2:
		{
			system("cls");
			menu2(cl_2, Head_1, Tail_1, Head_2, Tail_2);
			break;
		}
		case 3:
		{
			exit(1);
		}
		default:
			cout << "�������� �������" << endl;
			break;
		}
	}
	return 0;
}