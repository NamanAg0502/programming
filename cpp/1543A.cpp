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

long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{

    w(t)
    {
        long long a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            long long a1 = min(a, b), b1 = max(b, a), k = b1 - a1, l = 0, r = 0;
            l = a1 - ((a1 / k) * k);
            r = (((a1 / k) + 1) * k) - a1;
            if (l <= r)
            {
                a -= l;
                b -= l;
                cout << gcd(a, b) << " " << l << endl;
            }
            else
            {
                a += r;
                b += r;
                cout << gcd(a, b) << " " << r << endl;
            }
        }
    }
    return 0;
}