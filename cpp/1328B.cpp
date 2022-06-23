#include "/Users/na/stdc++.h"
using namespace std;

#define vi vector<int>
#define ll long long
#define ull unsigned long long
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define pb push_back
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
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
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define setbits(x) __builtin_popcount(x)

int main()
{
    w(t)
    {
        long long n, k;
        cin >> n >> k;
        string s = "";
        long long i = 2;
        long long x;
        while (i <= n)
        {
            x = ((i - 1) * i) / 2;
            if (x > k || x > INT_MAX)
            {
                break;
            }
            i++;
        }
        i--;
        long long cnt = k - (((i - 1) * i) / 2);
        for (int j = 0; j < n; j++)
        {
            s.push_back('a');
        }
        if (cnt > 0)
        {
            s[n - i - 1] = 'b';
            s[n - cnt] = 'b';
        }
        else
        {
            s[n - i] = 'b';
            s[n - i + 1] = 'b';
        }
        pe(s);
    }
    return 0;
}