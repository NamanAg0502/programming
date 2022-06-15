#include "/Users/na/stdc++.h"
using namespace std;

#define PI 3.1415926535897932384626
#define MOD 1000000007 // 998244353
#define vi vector<int>
#define ll long long
#define ull unsigned long long
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define pb push_back
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define f(a, n)                 \
    for (int i = 0; i < n; i++) \
    cout << a[i] << ' '
#define pf(a)             \
    for (auto &(i) : (a)) \
        cout << i << ' ';
#define p(a) cout << a << ' '
#define pe(a) cout << a << endl;
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define arr(int, n)             \
    int n;                      \
    cin >> n;                   \
    int arr[n];                 \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];
#define ce cout << endl;
#define setbits(x) __builtin_popcount(x)

bool sortbysec(const pair<pair<int, int>, int> &a,
               const pair<pair<int, int>, int> &b)
{
    return (a.first.second < b.first.second);
}

int main()
{
    w(t)
    {
        int n, m;
        cin >> n >> m;
        vector<pair<pair<int, int>, int>> v;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            v.pb({{y, x}, i});
        }
        sort(v.begin(), v.end());
        ll sum = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            sum += v[i].first.first;
        }
        pe(sum);
        v.resize(2 * n);
        sort(v.begin(), v.end(), sortbysec);
        for (int i = 0; i < n; i++)
        {
            p(v[i].second + 1);
            pe(v[2 * n - 1 - i].second + 1);
        }
        ce;
    }
    return 0;
}