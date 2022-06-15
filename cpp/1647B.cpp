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
#define arr(int, n)             \
    int n;                      \
    cin >> n;                   \
    int arr[n];                 \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];
#define ce cout << endl;
#define setbits(x) __builtin_popcount(x)

void solve()
{
    int n, m;
    cin >> n >> m;
    vvi v(n, vi(m));
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++)
        {
            v[i][j] = str[j] - '0';
        }
    }
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < m - 1; j++)
        {
            int sum = v[i][j] + v[i][j + 1] + v[i + 1][j] + v[i + 1][j + 1];
            if (sum == 3)
            {
                pe("NO");
                return;
            }
        }
    pe("YES");
}

int main()
{
    w(t)
    {
        solve();
    }
}