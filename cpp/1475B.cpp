#include "/Users/na/stdc++.h"
using namespace std;

using ll = long long;

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll mod = n % 2020;
        ll div = n / 2020;
        cout << mod << " " << div << endl;
        if (mod <= div)
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