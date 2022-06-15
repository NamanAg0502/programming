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
        string str;
        cin >> str;
        int n = str.length();
        int r = n - 1, l = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                r = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
                l = i;
        }
        cnt = r - l + 1;
        pe(cnt);
    }
    return 0;
}