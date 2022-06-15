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
        unordered_map<char, int> m;
        string str;
        cin >> str;
        int n = str.length();
        for (int i = 0; i < n; i++)
        {
            m[str[i]]++;
        }
        bool flag = false, diff = false;
        for (auto &(i) : m)
        {
            if (i.second > 1)
            {
                diff = true;
                break;
            }
        }
        if (diff)
        {
            if (str.find(str[n - 1]) != 0 || str.find(str[n - 1]) != n - 1)
                flag = true;
            if (str.find(str[0]) != 0 || str.find(str[0]) != n - 1)
                flag = true;
        }
        if (m.size() == 1)
        {
            flag = false;
        }
        if (flag)
        {
            pe("NO");
        }
        else
        {
            pe("YES");
        }
    }
    return 0;
}