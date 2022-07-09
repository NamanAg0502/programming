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
        unordered_set<int> set;
        int i = 1;
        vi a;
        while (i <= n)
        {
            if (set.find(i) != set.end())
            {
                int j = i;
                while ((2 * j) <= n && !set.count(2 * j))
                {
                    set.insert(2 * j);
                    a.pb(2 * j);
                    j = 2 * j;
                }

                i++;
            }
            else
            {
                set.insert(i);
                a.pb(i);
            }
        }
        pe(2);
        for (int i = 0; i < n; i++)
        {
            p(a[i]);
        }
        ce;
    }
    return 0;
}