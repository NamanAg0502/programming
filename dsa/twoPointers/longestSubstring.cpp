// longest substring with all different characters
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
#define f(i, a) for (auto &(i) : (a))
#define pf(a)             \
    for (auto &(i) : (a)) \
        cout << i << ' ';
#define p(a) cout << a << ' '
#define pe(a) cout << a << endl;
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define ce cout << endl;

int main()
{
    string s;
    cin >> s;
    vi v(256, -1);
    int start = -1, maxLength = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (v[s[i]] > start)
            start = v[s[i]];
        v[s[i]] = i;
        maxLength = max(maxLength, i - start);
    }
    pe(maxLength);
    return 0;
}