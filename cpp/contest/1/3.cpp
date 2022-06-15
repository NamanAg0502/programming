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
    w(t)
    {
        char a[8][8];
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
                cin >> a[i][j];
        int cnt = 0, x, y, k = 0;
        for (int i = 1; i < 7; i++)
            for (int j = 1; j < 7; j++)
                if (a[i][j] == '#' && a[i - 1][j - 1] == '#' && a[i + 1][j + 1] == '#' && a[i + 1][j - 1] == '#' && a[i - 1][j + 1] == '#')
                {
                    x = i + 1;
                    y = j + 1;
                }
        p(x);
        pe(y);
    }
    return 0;
}