#include "/Users/na/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
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
#define rsort(a) sort((a).rbegin(), (a).rend())
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define ic \
    int n; \
    cin >> n;
#define all(c) (c).begin(), (c).end()
#define sz(c) (int)(c).size()
#define pqmx priority_queue<int>
#define pqmn priority_queue<int, vector<int>, greater<int>>
#define max3(a, b, c) max((a), max((b), (c)))
#define min3(a, b, c) min((a), min((b), (c)))
#define mx_all(c) *max_element((c).begin(), (c).end())
#define mn_all(c) *min_element((c).begin(), (c).end())
#define lwr_b(c, a) lower_bound((c).begin(), (c).end(), (a)) - ((c).begin())
#define upr_b(c, a) upper_bound((c).begin(), (c).end(), (a)) - ((c).begin())
#define FIO                      \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int main()
{
    w(t)
    {
        ic;
        int sum = 0;
        int i = 9, p = 1;
        if (n < 10)
        {
            sum = n;
        }
        else if (n > 45)
        {
            sum = -1;
        }
        else
        {
            while (n > 0)
            {
                if (n >= i)
                {
                    n -= i;
                    sum += i * p;
                    p *= 10;
                }
                i--;
            }
        }
        cout << sum << endl;
    }
    return 0;
}