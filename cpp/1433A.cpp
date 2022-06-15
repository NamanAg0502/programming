#include "/Users/na/stdc++.h"
using namespace std;

#define PI 3.1415926535897932384626
#define MOD 1000000007 // 998244353
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define pb push_back
#define eb emplace_back
#define mp(a, b) make_pair(a, b)
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define f(i, a) for (auto &(i) : (a))
#define pf(a)             \
    for (auto &(i) : (a)) \
    cout << i << ' '
#define p(a) cout << a << ' '
#define pe(a) cout << a << endl;
#define rsort(a) sort((a).rbegin(), (a).rend())
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define max3(a, b, c) max((a), max((b), (c)))
#define min3(a, b, c) min((a), min((b), (c)))

int main()
{
    w(t)
    {
        int n;
        cin >> n;
        vi v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.pb(x);
        }
        int mid;
        if (n % 2 == 0)
        {
            mid = (n / 2) - 1;
        }
        else
        {
            mid = (n - 1) / 2;
        }
        int b = 0;
        pe(v[mid]);
        // while (mid > 0)
        // {
        pe(mid);
        pe(v[mid - 1]);
        if (v[mid] > v[mid - 1])
        {
            v[mid] += 1;
            v.erase(v[mid - 1], 1);
            mid--;
        }
        pe(mid);
        pe(v[mid]);
        // }
    }
    return 0;
}