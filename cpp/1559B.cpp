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
    w(t)
    {
        int n;
        cin >> n;
        string s, s1, s2;
        cin >> s;
        s1 = s;
        s2 = s;
        for (int i = 0; i < n; i++)
        {
            if (s1[2 * i] == '?')
            {
                s1[2 * i] = 'B';
            }
            if (s1[(2 * i) + 1] == '?')
            {
                s1[(2 * i) + 1] = 'R';
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s2[2 * i] == '?')
            {
                s2[2 * i] = 'R';
            }
            if (s2[(2 * i) + 1] == '?')
            {
                s2[(2 * i) + 1] = 'B';
            }
        }
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s1[i] == s1[i + 1])
                cnt1++;
            if (s2[i] == s2[i + 1])
                cnt2++;
        }
        if (cnt1 >= cnt2)
        {
            pe(s2);
        }
        else
        {
            pe(s1);
        }
    }
    return 0;
}