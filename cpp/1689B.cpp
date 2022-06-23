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
        int a[n];
        int b[n];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            b[i] = i;

        if (n == 1)
        {
            pe(-1);
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (a[i] == b[i])
                {
                    swap(b[i], b[i + 1]);
                }
            }
            if (a[n] == b[n])
                swap(b[n], b[n - 1]);

            for (int i = 1; i <= n; i++)
            {
                p(b[i]);
            }
            ce;
        }
    }
    return 0;
}