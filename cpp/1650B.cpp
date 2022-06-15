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
        int l, r, a;
        cin >> l >> r >> a;
        int sum = 0;
        if (a == 1 || r < a)
        {
            sum = r;
        }
        else if (r % a == 0 && r >= a)
        {
            sum = (r - 1) / a + (r - 1) % a;
        }
        else if (r % a != 0 && r > a)
        {
            if ((r % a) < ((((r / a) * a) - 1) % a) && (((r / a) * a) - 1) >= l)
            {
                sum = (((r / a) * a) - 1) % a + (((r / a) * a) - 1) / a;
            }
            else
            {
                sum = (r / a) + r % a;
            }
        }
        pe(sum);
    }
    return 0;
}