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

bool solve()
{
    int n;
    cin >> n;
    int a[n], b[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        k = max(k, a[i] - b[i]);
        if (a[i] < b[i])
        {
            return false;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if ((a[i] - b[i]) < k)
        {
            if (b[i] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    w(t)
    {
        if (solve())
        {
            pe("YES");
        }
        else
        {
            pe("NO");
        }
    }
    return 0;
}