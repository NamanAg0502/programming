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
        int n;
        cin >> n;
        vpii v;
        bool flag = true;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.pb({x, i});
            m[x]++;
        }
        for (auto &it : m)
        {
            if (it.second == 1)
                flag = false;
        }
        if (flag)
        {
            // int l = 0, r = 0;
            // for (int i = 1; i < n; i++)
            // {
            //     if (v[i].first == v[i - 1].first)
            //     {
            //         r = i;
            //         p(r + 1);
            //     }
            //     else
            //     {
            //         p(l + 1);
            //         l = i;
            //     }
            // }
            // p(l + 1);
            int l = 0,
                r = 0;
            for (auto &it : m)
            {
                int x = it.first;
                while (it.second--)
                {
                }
            }
        }
        else
        {
            p(-1);
        }
        ce;
    }
    return 0;
}