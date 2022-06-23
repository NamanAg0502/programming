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

int dp[2506];

int Lis(vector<int> &v, int i)
{
    int ans = 1;
    if (dp[i] != -1)
        return dp[i];
    for (int j = 0; j < i; j++)
        if (v[i] > v[j])
            ans = max(ans, 1 + Lis(v, j));
    return dp[i] = ans;
}

int lengthOfLIS(vector<int> &nums)
{
    memset(dp, -1, sizeof(dp));
    int n = nums.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, Lis(nums, i));
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vi nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    pe(lengthOfLIS(nums));
    return 0;
}