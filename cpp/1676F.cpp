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
#define f(a, n)                 \
    for (int i = 0; i < n; i++) \
    cout << a[i] << ' '
#define pf(a)             \
    for (auto &(i) : (a)) \
        cout << i << ' ';
#define p(a) cout << a << ' '
#define pe(a) cout << a << endl;
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define arr(a, n)               \
    int n;                      \
    cin >> n;                   \
    int a[n];                   \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define ce cout << endl;
#define setbits(x) __builtin_popcount(x)

int main()
{
    w(t)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        vector<int> v;
        for (auto &it : m)
        {
            if (it.second >= k)
            {
                v.pb(it.first);
            }
        }
        if (v.size() == 0)
        {
            pe(-1);
        }
        else
        {
            sort(v.begin(), v.end());
            int l = v[0], r = v[0], lans = v[0];
            int cnt = 0, total = 0;
            for (int i = 1; i < v.size(); i++)
            {
                if (v[i] - v[i - 1] == 1)
                {
                    if (v[i] - lans > total)
                    {
                        l = lans;
                        r = v[i];
                        total = v[i] - lans;
                    }
                }
                else
                {
                    lans = v[i];
                }
            }
            p(l);
            pe(r);
        }
    }
    return 0;
}