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
        return strlen(str);
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