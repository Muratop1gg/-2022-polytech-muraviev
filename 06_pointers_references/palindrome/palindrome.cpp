#include <cassert>
#include <iostream>
#include <string>


using namespace std;


bool test(const char* str)
{
    if (str == nullptr)
    {
        return false;
    }
    else
    {
        if ((strlen(str) / 2 == 1) && (strlen(str) % 2 == 0))
        {
            return false;
        }
        else
        {
            int a = strlen(str);
            for (int i = 0; i < (a / 2); i++)
            {
                if (str[a / 2 - i] == str[a / 2 + i])
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
            return true;
        }
    }
}


int main()
{
    assert(test("a") == true);
    assert(test("ab") == false);
    assert(test("") == true);
    assert(test("aboba") == true);
    assert(test("abobaboba") == true);
    assert(test("1234567890987654321") == true);
    assert(test("потоп") == true);
    assert(test(nullptr) == false);
    assert(test("довод") == true);
    return 0;
}