#include <iostream>
#include <cassert>


int gcd(int a, int b) {

    if (a < 0) a *= -1;
    if (b < 0) b *= -1;
    while (true)
    {
        if ((a != 0) && (b != 0))
        {
            if (a > b)
            {
                a %= b;
            }
            else
            {
                b %= a;
            }
        }
        else
        {
            return a + b;
        }
    }
    
  

    return 0;
}


int main() {
    assert(gcd(0, 5) == 5);
    assert(gcd(9, 0) == 9);
    assert(gcd(48, 64) == 16);
    assert(gcd(-64, 48) == 16);
    assert(gcd(30, 18) == 6);
    assert(gcd(-30, -18) == 6);
    assert(gcd(270, 192) == 6);
    std::cout << "Success!" << std::endl;
    return 0;
}