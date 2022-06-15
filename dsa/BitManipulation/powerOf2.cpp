#include "/Users/na/stdc++.h"
using namespace std;

// To check if the number is power of two or not

int main()
{
    int n = 16;
    if (n & n - 1)
    {
        cout << "Not power of 2";
    }
    else
    {
        cout << "Power of 2";
    }

    // 0000100000 -> power of 2 means one set bit (n)
    // 0000011111 -> n-1
    return 0;
}