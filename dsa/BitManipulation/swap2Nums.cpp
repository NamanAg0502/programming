// swap to numbers using XOR
#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int a = 4, b = 6;
    // swap two numbers
    a = a ^ b;
    b = b ^ a; // b = b ^ (a^b) --> b = b ^ b ^ a (using property 3)
               // b = a;

    a = a ^ b; // a = (a ^ b)^a --> a = a^a^b;
               // a = b;

    cout << a << " " << b;

    // Properties
    // 1. x^x == 0
    // 2. x^0 == x
    // 3. x^y^z = y^z^x = z^y^x

    //    1 1 -> 0
    //    1 0 -> 1
    //    0 1 -> 1
    //    0 0 -> 0

    // 101
    // 101
    //  xor of above no.s
    // 000

    // 101
    // 000
    // xor of above no.s
    // 101 ->
    int sum = 0;
    for (int i = 1; i <= 4; i++)
    {
        sum += __builtin_popcount(i);
    }
    cout << endl;
    cout << sum << endl;
    return 0;
}