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
        long long x, n;
        cin >> x >> n;
        long long coord = 0;
        if (x % 2 == 0)
        {
            if (n % 4 == 0)
            {
                coord = x;
            }
            else if (n % 4 == 1)
            {
                coord = x - n;
            }
            else if (n % 4 == 2)
            {
                coord = x + 1;
            }
            else if (n % 4 == 3)
            {
                coord = x + n + 1;
            }
        }
        else
        {
            if (n % 4 == 0)
            {
                coord = x;
            }
            else if (n % 4 == 1)
            {
                coord = x + n;
            }
            else if (n % 4 == 2)
            {
                coord = x - 1;
            }
            else if (n % 4 == 3)
            {
                coord = x - n - 1;
            }
        }
        cout << coord << '\n';
    }
    return 0;
}