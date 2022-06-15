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
        long long n;
        cin >> n;
        long long max = 0, min = 0;
        if (n % 2 == 1 || n < 4)
        {
            pe(-1);
        }
        else
        {
            if (n % 4 == 0 || n % 4 == 2)
            {
                max = n / 4;
            }
            if (n % 6 == 0)
            {
                min = n / 6;
            }
            else if (n % 6 == 2 || n % 6 == 4)
            {
                min = n / 6 + 1;
            }
            p(min);
            pe(max);
        }
    }
    return 0;
}