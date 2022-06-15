// Most significant bit;
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

    int n = 59;
    int i = 3;
    printBinary(59);
    //    to clear all msbs to 3 place;
    int b = (n & (((1 << (i + 1)) - 1)));
    printBinary(b);

    // 00000111011
    // 00000001111
    // 00000001111 -> 00000010000 -1 -> (i << 4) -1
    return 0;
}