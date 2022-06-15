#include "/Users/na/stdc++.h"
using namespace std;

#define PI 3.1415926535897932384626
#define MOD 1000000007 // 998244353
#define vi vector<int>
#define vb vector<bool>
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
#define rsort(a) sort((a).rbegin(), (a).rend())
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define max3(a, b, c) max((a), max((b), (c)))
#define min3(a, b, c) min((a), min((b), (c)))

int main()
{

    string s;
    cin >> s;
    int index = 0;
    if (s.find("444") != string::npos)
    {
        p("NO");
    }
    else
    {
        while ((index = s.find("144")) != string::npos)
        {
            s.erase(index, 3);
        }
        while ((index = s.find("14")) != string::npos)
        {
            s.erase(index, 2);
        }
        while ((index = s.find("1")) != string::npos)
        {
            s.erase(index, 1);
        }
        if (s.length() > 0)
            p("NO");
        else
        {
            p("YES");
        }
    }
    return 0;
}