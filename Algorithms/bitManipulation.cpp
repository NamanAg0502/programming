#include "/Users/na/stdc++.h"
using namespace std;

void printBinary(int n)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

int main()
{
    int n = 15;
    int i = 2;
    printBinary(15);

    if ((n & (1 << i)) != 0)
    {
        cout << "Set Bit" << endl;
    }
    else
    {
        cout << "Unset Bit" << endl;
    }

    // set bit;
    printBinary(n | (1 << i));

    // Unset bit;
    printBinary(n & ~(1 << i));

    // toggle bit;
    printBinary(n ^ (1 << 2));
    printBinary(n ^ (1 << 3));

    // No. of bits set
    cout << __builtin_popcount(n) << endl;
    cout << __builtin_popcountll((1LL << 35) - 1);

    return 0;
}