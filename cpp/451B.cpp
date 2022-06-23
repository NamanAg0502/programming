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
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    map<int, int> mp;
    sort(b, b + n);
    for (int i = 0; i < n; i++)
    {
        mp[b[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = mp[a[i]];
    }
    int L = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i)
        {
            L = i;
            break;
        }
    }
    int R = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != i)
        {
            R = i;
            break;
        }
    }
    if (L == -1 || R == -1)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
    }
    else
    {
        reverse(a + L, a + R + 1);
        int ok = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != i)
            {
                ok = false;
            }
        }
        if (ok)
        {
            cout << "yes" << endl;
            cout << L + 1 << " " << R + 1 << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}