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
        int l1, r1, l2, r2, cnt = 0;
        cin >> l1 >> r1 >> l2 >> r2;
        if (l2 > l1)
        {
            if (r1 >= l2)
                cnt = l2;
            else
                cnt = l1 + l2;
        }
        else if (l1 > l2)
        {
            if (r2 >= l1)
                cnt = l1;
            else
                cnt = l1 + l2;
        }
        else
            cnt = l1;
        pe(cnt);
    }
    return 0;
}