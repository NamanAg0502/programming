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
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                zero++;
            else
                one++;
        }
        int start = 0, end = s.length() - 1;
        int ans = INT_MAX, cnt = 0;
        if (zero == 0)
        {
            ans = 0;
        }
        else
        {
            while (start <= end)
            {
                if (s[start] == '0')
                {
                    start++;
                    zero--;
                }
                else if (s[end] == '0')
                {
                    end--;
                    zero--;
                }
                else
                {
                    int l = 0, r = 0, st = start, ed = end;
                    while (s[st] == '1')
                    {
                        st++;
                        l++;
                    }
                    while (s[ed] == '1')
                    {
                        ed--;
                        r++;
                    }
                    if (l > r)
                    {
                        end -= r;
                        cnt += r;
                    }
                    else
                    {
                        start += l;
                        cnt += l;
                    }
                }
                ans = min(ans, max(cnt, zero));
            }
        }
        pe(ans);
    }
    return 0;
}