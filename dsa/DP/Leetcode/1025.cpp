#include "/Users/na/stdc++.h"
using namespace std;

int count(int n)
{
    if (n == 1)
        return 0;
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {

            cout << count(n - i);
        }
    }
    j return cnt;
}

bool divisorGame(int n)
{
    int cnt = count(n);
    if (cnt % 2 == 1)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    cout << divisorGame(n) << endl;
    return 0;
}