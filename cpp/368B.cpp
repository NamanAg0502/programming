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
    int n, m;
    cin >> n >> m;
    int arr[n], b[n];
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = n - 1; i > -1; i--)
    {
        s.insert(b[i]);
        arr[i] = s.size();
    }
    while (m--)
    {
        int x;
        cin >> x;
        pe(arr[x - 1]);
    }
    return 0;
}