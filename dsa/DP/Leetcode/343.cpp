#include "/Users/na/stdc++.h"
using namespace std;

int dp[60];

int solve(int n)
{
    if (n == 1)
        return 1;

    if (dp[n] != -1)
        return max(n, dp[n]);
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, solve(n - i) * i);
    }
    return dp[n] = ans;
}

int integerBreak(int n)
{
    memset(dp, -1, sizeof(dp));
    return solve(n);
}

int main()
{
    cout << integerBreak(10) << endl;
    return 0;
}