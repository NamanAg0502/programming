#include "/Users/na/stdc++.h"
using namespace std;

#define PI 3.1415926535897932384626
#define MOD 1000000007 // 998244353
#define vi vector<int>
#define ll long long
#define ull unsigned long long
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
        ll n, k;
        cin >> n >> k;
        if (n > k)
        {
            if (n % k != 0)
            {
                k = ((n / k) + 1) * k;
            }
            else
            {
                k = (n / k) * k;
            }
        }
        int ans = 0;
        if (k % n != 0)
        {
            int x = k / n;
            ans = x + 1;
        }
        else
        {
            ans = k / n;
        }
        pe(ans);
    }
    return 0;
}