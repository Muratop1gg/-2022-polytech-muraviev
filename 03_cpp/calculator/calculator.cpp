#include <iostream>
#include <math.h>
#include "result.h"

using namespace std;

int main()
{
	while (true)
	{
		float a = 0;
		float b = 0;

		char sign = '-';

		cout << "type the equation" << endl;
		cin >> a >> sign >> b;
		result(a, sign, b);
	}

}