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
        int n, m, k;
        cin >> n >> m >> k;
        string s1, s2, s3;
        ll sum1 = 0, sum2 = 0;
        cin >> s1 >> s2;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        int n1 = s1.size();
        int n2 = s2.size();
        int l = k, r = k;
        while (n1 > 0 && n2 > 0)
        {
            if (s1[0] > s2[0])
            {
                if (r == 0)
                {
                    s3 += s1[0];
                    n1--;
                    s1 = s1.substr(1);
                    r = k;
                    l--;
                }
                else
                {
                    s3 += s2[0];
                    n2--;
                    s2 = s2.substr(1);
                    r--;
                    l = k;
                }
            }
            else if (s1[0] < s2[0])
            {
                if (l == 0)
                {
                    s3 += s2[0];
                    n2--;
                    s2 = s2.substr(1);
                    r--;
                    l = k;
                }
                else
                {
                    s3 += s1[0];
                    n1--;
                    s1 = s1.substr(1);
                    r = k;
                    l--;
                }
            }
            else
            {
                if (n1 > n2)
                {
                    if (r == 0)
                    {
                        s3 += s1[0];
                        n1--;
                        s1 = s1.substr(1);
                        r = k;
                        l--;
                    }
                    else
                    {
                        s3 += s2[0];
                        n2--;
                        s2 = s2.substr(1);
                        r--;
                        l = k;
                    }
                }
                else
                {
                    if (l == 0)
                    {
                        s3 += s2[0];
                        n2--;
                        s2 = s2.substr(1);
                        r--;
                        l = k;
                    }
                    else
                    {
                        s3 += s1[0];
                        n1--;
                        s1 = s1.substr(1);
                        r = k;
                        l--;
                    }
                }
            }
        }
        pe(s3);
    }
    return 0;
}