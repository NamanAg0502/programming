#include "/Users/na/stdc++.h"
using namespace std;

int fib(int n)
{
    return (n == 1 || n == 0) ? n : fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << fib(i) << " ";
    }
    return 0;
}