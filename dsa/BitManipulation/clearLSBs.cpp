// Least significant bit;
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
    int i = 4;
    printBinary(59);
    //    to clear all lsbs to 4 place;
    int b = (n & (~((1 << (i + 1)) - 1)));
    printBinary(b);

    // 00000111011
    // 11111100000 -> hard to get
    // 00000011111 -> 00000100000 -1 -> (i << 5) -1
    return 0;
}