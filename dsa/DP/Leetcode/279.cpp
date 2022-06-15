#include "/Users/na/stdc++.h"
using namespace std;

vector<int> v;
int dp[1005];

int solve(int n, int i)
{
    if (i == n)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int ans = INT_MAX;
    for (int &it : v)
    {
        if (it <= n)
        {
            ans = min(ans, 1 + solve(n, i + it));
        }
    }

    return dp[i] = ans;
}

int numSquares(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        v.push_back(i * i);
    }
    memset(dp, -1, sizeof(dp));
    return solve(n, 0);
}

int main()
{

    cout << numSquares(12);
    return 0;
}