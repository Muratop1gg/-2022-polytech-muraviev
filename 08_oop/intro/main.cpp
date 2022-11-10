#include "String.h"
#include <iostream>


using namespace std;


int main() {
	String frst = "String"; // первая строка
	String scnd = " Length:"; // вторая строка
	String thrd = frst + scnd; // их сумма
	cout << thrd << '\t' << thrd.get_length() << endl;
	return 0;
}
