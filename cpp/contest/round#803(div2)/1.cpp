#include "bits/stdc++.h"
using namespace std;

#define vi vector<int>
#define ll long long
#define ull unsigned long long
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define pb push_back
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define pf(a)             \
    for (auto &(i) : (a)) \
        cout << i << ' ';
#define p(a) cout << a << ' '
#define pe(a) cout << a << endl;
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define ce cout << endl;
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define setbits(x) __builtin_popcount(x)

int main()
{
    w(t)
    {
        int n;
        cin >> n;
        int x = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            x ^= a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((a[i] ^ x) == a[i])
            {
                pe(a[i]);
                break;
            }
        }
    }

    return 0;
}