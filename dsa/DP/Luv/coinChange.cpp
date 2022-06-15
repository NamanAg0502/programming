#include "/Users/na/stdc++.h"
using namespace std;

int dp[300][10010];

// int func(int i, int amount, vector<int> &coins)
// {
//     if (amount == 0)
//         return 0;
//     if (i < 0)
//         return -1;
//     if (dp[i][amount] != -1)
//         return dp[i][amount];
//     int ans = INT_MAX;
//     for (int cn_amt = 0; cn_amt <= amount; cn_amt += coins[i])
//     {
//     }
// }

int func(int amount, vector<int> &coins)
{
    if (amount == 0)
        return 0;
    if (dp[amount] != -1)
        return dp[amount];
    int ans = INT_MAX;
    for (int coin = 0; coin < coins.size(); coin++)
    {
        if (amount - coins[coin] >= 0)
            ans = min(ans + 0LL, func(amount - coins[coin], coins) + 1LL);
    }
    return dp[amount] = ans;
}

int coinChange(int amount, vector<int> &coins)
{
    memset(dp, -1, sizeof(dp));
    int ans = func(amount, coins);
    return ans == INT_MAX ? -1 : ans;
}

int main()
{
    int n, amount;
    cin >> n >> amount;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << coinChange(amount, v);
    return 0;
}