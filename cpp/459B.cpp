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
    long long n;
    cin >> n;
    map<long long, long long> m;
    long long minN = INT_MAX, maxN = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        minN = min(minN, x);
        maxN = max(maxN, x);
        m[x]++;
    }

    long long diff = maxN - minN;
    long long a = m[maxN];
    long long b = m[minN];
    long long ways = a * b;
    if (minN < maxN)
    {
        p(diff);
        pe(ways);
    }
    else
    {
        p(diff);
        pe((n * (n - 1)) / 2);
    }
    return 0;
}

// 2 -> 1;
// 3 -> 3;
// 4 -> 6;

// 2,1;