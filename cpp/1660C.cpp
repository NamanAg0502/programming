#include "/Users/na/stdc++.h"
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

int sz = 26;

void solve()
{
    string s;
    cin >> s;
    int m = 0, n = (int)s.size();
    vector<bool> prev(sz, false);
    for (auto &i : s)
    {
        if (prev[i - 'a'])
        {
            m += 2;
            for (int j = 0; j < sz; j++)
                prev[j] = false;
        }
        else
            prev[i - 'a'] = true;
    }

    cout << n - m << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
