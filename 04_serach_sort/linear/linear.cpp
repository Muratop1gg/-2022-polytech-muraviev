#include <iostream>

using namespace std;

int search(int arr[], int n, int x, int result[])
{
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            result[b] = i;
            b++;
        }
    }
    return b;
}
/*
int doublesearch(int arr[], int n, int key)
{
	int x = 0;
	int mid;
	bool flag = false;
	while ((x <= n) && (flag != true)) {
		mid = (x + n) / 2;

		if (arr[mid] == key) flag = true; 
		if (arr[mid] > key) n = mid - 1; 
		else x = mid + 1;
	}
	return mid;
}
*/


int main()
{
    int mas[11] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 19}; 
    const int arrsize = sizeof(mas) / sizeof(mas[0]); // находим длину массива
    int result[arrsize]; // создаём массив result и заполняем его нулями
    for (int i = 0; i < arrsize; ++i)
    {
        result[i] = 0;
    }
    cout << "Count" << search(mas, arrsize, 19, result) << endl << "Results ID : " << endl; // выводим количество найденных элементов и их номера
    for (int i = 0; i < arrsize; ++i)
    {
        cout << result[i] << endl;
    }

}