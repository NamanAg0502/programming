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
        vi a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        vpii v;
        int cnt = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    swap(a[i], a[j]);
                    swap(b[i], b[j]);
                    v.pb({i, j});
                    cnt++;
                }
                if (cnt > 10000)
                    break;
            }
        }
        if (cnt < 10000)
        {
            if (is_sorted(b.begin(), b.end()))
            {
                if (cnt >= 0 && cnt < 10000)
                {
                    pe(cnt);
                    for (auto &it : v)
                    {
                        p(it.second + 1);
                        pe(it.first + 1);
                    }
                }
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    for (int j = i; j < n; j++)
                    {
                        if (b[i] > b[j])
                        {
                            swap(a[i], a[j]);
                            swap(b[i], b[j]);
                            v.pb({i, j});
                            cnt++;
                        }
                        if (cnt > 10000)
                            break;
                    }
                }
                if (is_sorted(a.begin(), a.end()))
                {
                    if (cnt >= 0 && cnt < 10000)
                    {
                        pe(cnt);
                        for (auto &it : v)
                        {
                            p(it.second + 1);
                            pe(it.first + 1);
                        }
                    }
                }
                else
                {
                    pe(-1);
                }
            }
        }
        else
        {
            pe(-1);
        }
    }
    return 0;
}