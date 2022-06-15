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
#define arr(a, n)               \
    int n;                      \
    cin >> n;                   \
    int a[n];                   \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define ce cout << endl;
#define setbits(x) __builtin_popcount(x)

int main()
{
    unordered_map<string, int> map;
    int n;
    cin >> n;
    vector<pair<string, int>> a(n, {"OK", 0});
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        map[s]++;
        if (map[s] > 1)
        {
            a[i].first = s;
            a[i].second = map[s] - 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        string ch = to_string(a[i].second);
        if (a[i].second == 0)
            ch = "";

        string str = a[i].first + ch;
        pe(str);
    }
    return 0;
}