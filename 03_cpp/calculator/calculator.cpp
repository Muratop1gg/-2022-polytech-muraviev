#include <iostream>
#include <math.h>
using namespace std;




int in(float a, char sign, float b)
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



int main()
{
	while (true)
	{
		float a = 0;
		float b = 0;

		char sign = '-';

		cout << "type the equation" << endl;
		cin >> a >> sign >> b;
		in(a, sign, b);
	}

}