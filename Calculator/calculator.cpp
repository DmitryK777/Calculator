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
	
	cout << "Введите \"Y\" для вычислений или \"N\" для выхода: "; cin >> answer;

	while (answer != 'N')
	{
		cout << "Введите выражение для вычисления: ";
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
			cout << "Неверно введёно оператор" << endl;
			cout << endl;
		}

		if (optr == '+' || optr == '-' || optr == '*' || optr == '/')
		{
			cout << "Результат выражения равен: " << result << endl;
			cout << endl;
		}

		cout << "Введите \"Y\" для вычислений или \"N\" для выхода: "; cin >> answer;
	}

	
	
	
	
}