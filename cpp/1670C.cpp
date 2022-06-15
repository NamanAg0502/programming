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
        int cnt = 0, cnt2 = 0;
        cin >> n;
        vi a(n), b(n);
        vpii c;
        unordered_set<int> s;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x != 0)
            {
                s.insert(a[i]);
                s.insert(b[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s.count(a[i]) && !s.count(b[i]))
            {
                s.insert(b[i]);
            }
            else if (!s.count(a[i]) && s.count(b[i]))
            {
                s.insert(a[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s.count(a[i]) || s.count(b[i]))
                cnt++;
            else if (a[i] == b[i])
                cnt++;
            else if (a[i] != b[i])
            {
                c.pb({a[i], b[i]});
            }
        }
        for (int i = 0; i < c.size(); i++)
        {
            for (int j = 0; j < c.size(); j++)
            {
                if (c[i].first == c[j].second && c[i].second != c[j].first)
                {
                    cnt2++;
                }
            }
        }
        cnt += cnt2 / 2;
        ll ans = pow(2, (n - cnt) / 2);
        pe(ans % MOD);
    }
    return 0;
}

// 1 3 7 5
