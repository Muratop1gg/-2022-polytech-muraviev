#include <iostream>
using namespace std;

int result(float a, char sign, float b)
{
	if (sign == '+')
	{
		cout << a + b << endl;
	}
	else
	if (sign == '-')
	{
		cout << a - b << endl;
	}
	else
	if (sign == '*')
	{
		cout << a * b << endl;
	}
	else
	if (sign == '/')
	{
		cout << a / b << endl;
	}
	else
	if (sign == '^')
	{
		cout << pow(a, b) << endl;
	}
	return 0;
}
