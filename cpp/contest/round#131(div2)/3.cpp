#include "bits/stdc++.h"
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
        int n, m;
        cin >> n >> m;
        map<int, int> map;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            map[x]++;
        }
        vi a(n + 1, 0);
        for (auto it : map)
        {
            a[it.first] = it.second;
        }
        sort(a.begin(), a.end());
        int k = a.size();
        for (int i = 1; i <= k / 2; i++)
        {
            if (a[k - i] - a[i] > 2)
            {
                a[k - i]--;
                a[i] += 2;
            }
        }

        pe(*max_element(a.begin(), a.end()));
    }
    return 0;
}