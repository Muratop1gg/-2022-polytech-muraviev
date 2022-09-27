#include <iostream>

using namespace std;

int search(int arr[], int l, int r, int key)
{
	int mid;
	bool flag = false;
	while ((l <= r) && (flag != true)) {
		mid = (l + r) / 2;

		if (arr[mid] == key) flag = true; 
		if (arr[mid] > key) r = mid - 1; 
		else l = mid + 1;
	}
	return mid;
}


int main()
{
    int mas[11] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}; 
    const int arrsize = sizeof(mas) / sizeof(mas[0]); // находим длину массива
    cout << "Item ID: " << search(mas, 0, arrsize, 19) << endl; // выводим количество найденных элементов и их номера
}
