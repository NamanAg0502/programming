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
    int n;
    cin >> n;
    vi a(n + 2);
    a[0] = INT_MIN;
    a[n + 1] = INT_MAX;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int l = 0, r = n + 1, cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i + 1] < a[i] && a[i] > a[i - 1])
        {
            l = i;
            cnt++;
        }
        else if (a[i + 1] > a[i] && a[i] < a[i - 1])
        {
            r = i;
            cnt++;
        }
    }
    if (cnt == 2 && r > l)
    {
        reverse(a.begin() + l, a.begin() + r + 1);
        if (is_sorted(a.begin() + 1, a.begin() + n + 1))
        {
            pe("yes");
            p(l);
            pe(r);
        }
        else
        {
            pe("no");
        }
    }
    else
    {
        pe("no");
    }
    return 0;
}