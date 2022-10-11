#include <iostream>
#include <fstream>
#include <string>


using namespace std;


double freespacecounter(string file)
{
	string getcontent;
	ifstream openfile(file);
	int MemTotal, MemFree;
	if (openfile.is_open())
	{
		while (openfile >> getcontent)
		{
			if (getcontent == "MemTotal:")
			{
				openfile >> MemTotal;
			}
			if (getcontent == "MemFree:")
			{
				openfile >> MemFree;
				break;
			}
		}
		double per1 = MemTotal / 100;
		double per2 = 100 - (MemFree / per1);
		return per2;
	}
	else
	{
		return -1;
	}
}


int main()
{	
	int space = freespacecounter("/proc/meminfo");
	int c = 0;
	for (int i = 0; i < space; i += 10)
	{
		c++;
	}
	for (int i = 1; i < c; i++)
	{
		cout << "|";
		if (i == c - 1)
		{
			while (i < 10)
			{
				cout << ".";
				i++;
			}
		}
	}
	cout << "  " << space << "%" << endl;
}