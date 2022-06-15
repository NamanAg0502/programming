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

int count(int n)
{
    int ans = 0;
    while ((n & 1) == 0)
    {
        n = n >> 1;
        ans++;
    }
    return ans % 15;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = x % 32768;
    }
    for (int k = 0; k < n; k++)
    {
        int ans = INT_MAX;
        for (int i = 0; i < 15; i++)
            for (int j = 0; j <= 15; j++)
            {
                int mul = pow(2, j);
                if (((a[k] + i) * mul) % 32768 == 0)
                    ans = min(ans, j + i);
            }
        p(ans);
    }
    return 0;
}