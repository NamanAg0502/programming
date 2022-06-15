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
#define f(a, n)                 \
    for (int i = 0; i < n; i++) \
    cout << a[i] << ' '
#define pf(a)             \
    for (auto &(i) : (a)) \
        cout << i << ' ';
#define p(a) cout << a << ' '
#define pe(a) cout << a << endl;
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define arr(a, n)               \
    int n;                      \
    cin >> n;                   \
    int a[n];                   \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define ce cout << endl;
#define setbits(x) __builtin_popcount(x)

int main()
{
    int n;
    cin >> n;
    unordered_set<int> s1, s2;
    w(t)
    {
        int q;
        cin >> q;
        if (q == 1)
        {
            int a, b;
            cin >> a >> b;
            if (s1.count(a) == false)
                s1.insert(a);
            if (s2.count(b) == false)
                s2.insert(b);
        }
        else if (q == 2)
        {
            int a, b;
            cin >> a >> b;
            if (s1.count(a))
                s1.erase(a);
            if (s2.count(b))
                s2.erase(b);
        }
        else if (q == 3)
        {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            int a = 0, b = 0, c = 0, d = 0;
            if (s1.count(x1))
                a++;
            if (s1.count(x2))
                b++;

            if (s2.count(y1))
                c++;
            if (s2.count(y2))
                d++;

            if (a && b || c && d)
            {
                pe("YES");
            }
            else
            {
                pe("NO");
            }
        }
    }
    return 0;
}