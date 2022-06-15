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

string solve(int n, int t)
{
    string s;
    if (t < 10)
    {
        s = to_string(t);
    }
    else
    {
        s = '1';
    }
    while (n > 1)
    {
        s += '0';
        n--;
    }
    return s;
}

int main()
{
    int n, t;
    cin >> n >> t;

    if (n == 1 && t == 10)
    {
        pe(-1);
    }
    else
    {
        pe(solve(n, t));
    }
    return 0;
}