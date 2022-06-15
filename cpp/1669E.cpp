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
    w(y)
    {
        int n;
        cin >> n;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i][1] == s[j][0] || s[i][1] == s[j][1] && s[i][0] != s[j][1] || s[i][0] != s[j][0])
                {
                    cnt++;
                }
                else if (s[i][1] != s[j][0] || s[i][1] != s[j][0] && s[i][0] == s[j][1] || s[i][0] == s[j][0])
                {
                    cnt++;
                }
            }
        }
        pe(cnt);
    }
    return 0;
}