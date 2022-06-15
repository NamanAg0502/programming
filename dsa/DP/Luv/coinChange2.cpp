#include "/Users/na/stdc++.h"
using namespace std;

int dp[310][10010];

int func(int i, int amount, vector<int> &coins)
{
    if (amount == 0)
        return 1;
    if (i < 0)
        return 0;
    if (dp[i][amount] != -1)
        return dp[i][amount];
    int ans = 0;
    for (int coin = 0; coin <= amount; coin += coins[i])
    {
        ans += func(i - 1, amount - coin, coins);
    }
    return dp[i][amount] = ans;
}

int coinChange(int amount, vector<int> &coins)
{
    memset(dp, -1, sizeof(dp));
    int ans = func(coins.size() - 1, amount, coins);
    return ans;
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