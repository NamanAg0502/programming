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
    w(t)
    {
        unordered_map<int, int> m;
        vector<pair<int, int>> v;
        int n;
        cin >> n;
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            m[s[i]]++;
            v.pb(make_pair(s[i], i));
        }
        bool flag = true;
        for (auto i : m)
        {
            if (i.second == 1)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (v[i].first == v[j].first)
                    {
                        swap(v[i].second, v[j].second);
                        break;
                    }
                }
            }
            for (int i = 0; i < n; i++)
            {
                p(v[i].second + 1);
            }
            ce;
        }
        else
        {
            pe(-1);
        }
    }
    return 0;
}