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
        string s;
        cin >> s;
        int minVal = INT_MAX, cnt = 0, cnt2 = 0, total[n], l = -1, r = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'W')
                cnt2++;
            total[i] = cnt2;
        }
        for (int i = 0; i < n; i++)
        {
            if ((i - l) > k)
                l++;
            if ((i - l) == k)
            {
                if (l >= 0)
                    minVal = min(minVal, total[i] - total[l]);
                else
                    minVal = min(minVal, total[i]);
            }
        }
        pe(minVal);
    }
    return 0;
}