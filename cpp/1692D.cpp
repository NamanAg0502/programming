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

int good[16] = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};

int main()
{
    w(t)
    {
        string s;
        int k;
        cin >> s >> k;

        string s1 = s.substr(0, 2);
        string s2 = s.substr(3);
        int x = stoi(s1) * 60 + stoi(s2);
        int ans = 0;

        unordered_set<int> set;
        for (int i = 0; i < 1440; i++)
        {
            set.insert(x);
            x += k;
            x %= 1440;
        }

        for (auto &it : set)
        {
            for (int j = 0; j < 16; j++)
            {
                if (good[j] == it)
                    ans++;
            }
        }
        pe(ans);
    }
    return 0;
}