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

int dp[1005][1005];

int lcs(string &s1, string &s2, int n, int m)
{
    if (n == 0 || m == 0)
        return 0;
    int ans = 0;

    if (dp[n][m] != -1)
        return dp[n][m];

    if (s1[n - 1] == s2[m - 1])
        ans = 1 + lcs(s1, s2, n - 1, m - 1);
    else
    {
        ans = max(lcs(s1, s2, n, m - 1), lcs(s1, s2, n - 1, m));
    }
    return dp[n][m] = ans;
}

int longestCommonSubsequence(string &text1, string &text2)
{
    memset(dp, -1, sizeof(dp));
    return lcs(text1, text2, text1.length(), text2.length());
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    pe(longestCommonSubsequence(str1, str2));

    return 0;
}