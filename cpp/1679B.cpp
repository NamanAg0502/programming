#include "/Users/na/stdc++.h"
using namespace std;

#define PI 3.1415926535897932384626
#define MOD 1000000007 // 998244353
#define vi vector<int>
#define vb vector<bool>
#define ll long long
#define ull unsigned long long
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
    ll n, q;
    cin >> n >> q;
    vector<long long> a(n);
    ll sum = 0;
    ll num = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    ll query;
    while (q--)
    {
        cin >> query;
        if (query == 1)
        {
            ll i, x;
            cin >> i >> x;
            if (num == -1)
            {
                sum = sum - a[i - 1] + x;
                cout << sum << endl;
            }
            else
            {
                sum = sum - num + x;
                cout << sum << endl;
            }
        }
        else
        {
            ll x;
            cin >> x;
            sum = x * n;
            num = x;
            cout << sum << endl;
        }
    }
    return 0;
}