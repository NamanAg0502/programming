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

int solve(int n)
{
    int i = 0;
    for (i = 3; i <= sqrt(n); i = i + 2)
    {
        if (n % i == 0)
        {
            return i;
            break;
        }
    }
    return n;
}

int main()
{

    w(t)
    {
        int n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            n = n + 2 * k;
        }
        else
        {
            n = n + solve(n) + 2 * (k - 1);
        }
        pe(n);
    }
    return 0;
}