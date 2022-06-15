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
        string s;
        cin >> s;
        int cnt1 = 0, cnt2 = 0;
        int n = s.length();
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] != '5')
                cnt1++;
            else
            {
                for (int j = i - 1; j >= 0; j--, cnt1++)
                {
                    if (s[j] == '2' || s[j] == '7')
                        break;
                }
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {

            if (s[i] != '0')
                cnt2++;
            else
            {

                for (int j = i - 1; j >= 0; j--, cnt2++)
                {

                    if (s[j] == '5' || s[j] == '0')
                        break;
                }
                break;
            }
        }
        pe(min(cnt1, cnt2));
    }
    return 0;
}