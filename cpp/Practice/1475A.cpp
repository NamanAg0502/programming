#include "/Users/na/stdc++.h"
using namespace std;

/// learn bitwise manipulation

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int flag = 0;
        while (n % 2 == 0)
        {
            if (n == 2)
            {
                n -= 2;
            }
            n /= 2;
            cout << n << " ";
        }
        cout << endl;
        cout << n % 2;
        cout << endl;
        if (n % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}