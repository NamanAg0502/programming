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
        ll hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc >> hm >> dm >> k >> w >> a;
        bool flag = false;
        for (int i = 0; i <= k; i++)
        {
            ll temp_hc, temp_dc;
            temp_hc = hc + (i * a);
            temp_dc = dc + ((k - i) * w);
            ll x = (temp_hc + dm - 1) / dm;
            ll y = (temp_dc + hm - 1) / temp_dc;
            if (y <= x)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout
                << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}