#include "/Users/na/stdc++.h"
using namespace std;

vector<int> v;
int dp[1000006];

int solve(int n, int i)
{
    if (i > n)
    {
        return 0;
    }

    if (dp[i] != -1)
        return dp[i];

    int ans = 0;
    ans = __builtin_popcount(i);
    v.push_back(ans);
    return dp[i] = solve(n, i + 1);
}

vector<int> countBits(int n)
{
    memset(dp, -1, sizeof(dp));
    solve(n, 0);
    return v;
}

int main()
{

    for (int &it : countBits(5))
    {
        cout << it << endl;
    }
    return 0;
}