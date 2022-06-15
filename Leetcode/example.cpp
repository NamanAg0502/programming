#include "/Users/na/stdc++.h"
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

// Driver program to test above function
int main()
{
    int a = 13, b = 56;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b);
    // cout << 13 % 56;
    return 0;
}
