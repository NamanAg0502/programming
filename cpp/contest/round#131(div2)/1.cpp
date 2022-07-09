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
        int one = 0;
        int a[2][2];
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 1)
                    one++;
            }

        if (one == 4)
        {
            pe(2);
        }
        else if (one == 0)
        {
            pe(0);
        }
        else
        {
            pe(1);
        }
    }
    return 0;
}