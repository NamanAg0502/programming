#include "/Users/na/stdc++.h"
using namespace std;

#define PI 3.1415926535897932384626
#define MOD 1000000007 // 998244353
#define vi vector<int>
#define ll long long
#define ull unsigned long long
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define pb push_back
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define f(i, a) for (auto &(i) : (a))
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

int main()
{
    w(t)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        if (v[n - 2] > v[n - 1])
        {
            pe(-1);
        }
        else
        {
            if (v[n - 1] < 0)
            {
                if (is_sorted(v.begin(), v.end()))
                {
                    pe(0);
                }
                else
                {
                    pe(-1);
                }
            }
            else
            {
                pe(n - 2);
                for (int i = 1; i <= n - 2; ++i)
                {
                    p(i);
                    p(n - 1);
                    pe(n);
                }
            }
        }
    }
    return 0;
}