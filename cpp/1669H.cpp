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
        vector<int> v(31, 0), a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            for (int j = 30; j >= 0; j--)
            {
                if (a[i] & (1 << j))
                    v[j]++;
            }
        }
        int ans = 0;
        for (int i = 30; i >= 0; i--)
        {
            int need = n - v[i];
            if (need <= k)
            {
                k -= need;
                ans += (1 << i);
            }
        }
        pe(ans);
    }
    return 0;
}