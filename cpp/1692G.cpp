#include "/Users/na/stdc++.h"
using namespace std;

#define vi vector<int>
#define ll long long
#define ull unsigned long long
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define pb push_back
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define pf(a)             \
    for (auto &(i) : (a)) \
        cout << i << ' ';
#define p(a) cout << a << ' '
#define pe(a) cout << a << endl;
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define ce cout << endl;
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define setbits(x) __builtin_popcount(x)

int main()
{
    w(t)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ok[n];
        for (int i = 0; i < n - 1; i++)
        {
            ok[i] = (a[i] < 2 * a[i + 1]);
        }
        int tot = 0;
        for (int i = 0; i < k; i++)
        {
            tot += ok[i];
        }
        int res = 0;
        if (tot == k)
        {
            res++;
        }
        for (int i = k; i < n - 1; i++)
        {
            tot += ok[i];
            tot -= ok[i - k];
            if (tot == k)
            {
                res++;
            }
        }
        cout << res << '\n';
    }
    return 0;
}