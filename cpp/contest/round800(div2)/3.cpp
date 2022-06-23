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
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool flag = true;
        if (a[0] < 0 || a[n - 1] > 0)
            flag = false;

        int j = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != 0)
            {
                j = i;
                break;
            }
        }
        for (int i = j; i > 0; i--)
        {
            if (a[i] <= a[i - 1])
            {
                a[i - 1] += a[i];
                a[i] = 0;
            }
            else
            {
                flag = false;
                break;
            }
        }
        for (int i = 0; i < n; i++)
            if (a[i] != 0)
                flag = false;

        if (flag)
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