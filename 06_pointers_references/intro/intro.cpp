#include <cassert>
#include <iostream>
#include <string>


using namespace std;


unsigned int length(const char* str)
{
    if (str == nullptr)
    {
        return 0;
    }
    else
    {
        int size = 0;
        while (*str++)
        {
            size++;
        }
        return size;
    }
}


int main()
{
    assert(length("a") == 1);
    assert(length("ab") == 2);
    assert(length("") == 0);
    assert(length("hello world") == 11);
    assert(length(nullptr) == 0);
    return 0;
}