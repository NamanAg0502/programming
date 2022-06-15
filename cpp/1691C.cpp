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

int main()
{
    w(t)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int a = 0, b = 0, cnt = 0;

        for (int i = 0; i < n; i++)
            if (str[i] == '1')
                cnt++;
        for (int i = n - 1; i >= 0; i--)
            if (str[i] == '1')
            {
                b = n - 1 - i;
                break;
            }
        for (int i = 0; i < n; i++)
            if (str[i] == '1')
            {
                a = i;
                break;
            }
        ll ans = cnt * 11;
        if (cnt > 0)
        {
            if (a + b != (n - 1))
            {
                if (a + b <= k)
                    ans -= 11;
                else
                {
                    if (k >= b)
                        ans -= 10;
                    else if (k >= a && k < b)
                        ans -= 1;
                }
            }
            else
            {
                if (k >= b)
                    ans -= 10;
                else if (k >= a && k < b)
                    ans -= 1;
            }
        }
        pe(ans);
    }
    return 0;
}