#include <cassert>
#include <iostream>
#include <string>


using namespace std;


const char arr[] = "0123456789";


int convert(const char* a) // преобразование str в int
{
    int res = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        for (int x = 0; x < 10; x++)
        {
            if (a[i] == arr[x])
            {
                res *= 10;
                res += x;
            }
        }
    }
    if (a[0] == '-') // проверка на отрицательность
    {
        res *= -1;
    }
    return res;
}


const char* int_to_str(int a) // преобразование int в str
{
    int arrn[10] = { 0,1,2,3,4,5,6,7,8,9 }; // массив с цифрами
    int i = 1;
    int b = a;
    while (b / 10 != 0) // узнаём количество цифр в числе
    {
        b /= 10;
        i++;
    }
    char *result = new char[i + 2]; // объявляем динамический массив
    b = a;
    if (a >= 0) // если число положительно
    {
        for (int x = i - 1; x > -1; x--) 
        {
            for (int z = 0; z < 10; z++)
            {
                if ((a % 10) == arrn[z])
                {
                    result[x] = arr[z];
                    break;
                }
            }
            a /= 10;
            result[i] = '\0';
        }
    }
    else // если число отрицательно
    {
        a = b;
        result[0] = '-';
        a *= (-1);
        for (int x = 1; x < i + 1; x++)
        {
            for (int z = 0; z < 10; z++)
            {
                if ((a % 10) == arrn[z])
                {
                    result[i - x + 1] = arr[z];
                    break;
                }
            }
            a /= 10;
        }
        result[i + 1] = '\0';
    }  
    
    return result;
}


int pre_mul(const char* a, const char* b) // возвращает результат произведения в виде int
{
    int res = convert(a) * convert(b);
    return res;
}


const char* mul(const char* a, const char* b) // возвращает результат произведения в виде строки
{
    return int_to_str(pre_mul(a, b));
}


int main()
{
    std::cout << mul("200", "-45") << endl;
    return 0;
}