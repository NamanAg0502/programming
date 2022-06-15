// intial kritio strength = s;
// dragon strngth = xi;
// if s > xi -> s+= yi;
// if s < xi -> NO
// Can fight in any order *;

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
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> v;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
        v.push_back(make_pair(a[i], b[i]));
    sort(v.begin(), v.end());
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (v[i].first < s)
        {
            s += v[i].second;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        pe("YES");
    }
    else
    {
        pe("NO");
    }
    return 0;
}