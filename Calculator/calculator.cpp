#include <iostream>
#include <typeinfo>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	double first_operand = 0;
	char optr = ' ';
	double second_operand = 0;
	double result = 0;

	char answer = ' ';
	
	cout << "������� \"Y\" ��� ���������� ��� \"N\" ��� ������: "; cin >> answer;

	while (answer != 'N')
	{
		cout << "������� ��������� ��� ����������: ";
		cin >> first_operand >> optr >> second_operand;

		if (optr == '+')
		{
			result = first_operand + second_operand;
		}
		else if (optr == '-')
		{
			result = first_operand - second_operand;
		}
		else if (optr == '*')
		{
			result = first_operand * second_operand;
		}
		else if (optr == '/')
		{
			result = first_operand / second_operand;
		}
		else
		{
			cout << "������� ������ ��������" << endl;
			cout << endl;
		}

		if (optr == '+' || optr == '-' || optr == '*' || optr == '/')
		{
			cout << "��������� ��������� �����: " << result << endl;
			cout << endl;
		}

		cout << "������� \"Y\" ��� ���������� ��� \"N\" ��� ������: "; cin >> answer;
	}

	
	
	
	
}