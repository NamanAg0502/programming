#include "/Users/na/stdc++.h"
using namespace std;

vector<vector<int>> v;

void solve(vector<int> &subset, int i, vector<int> &nums)
{
    if (i == nums.size())
    {
        v.push_back(subset);
        return;
    }
    solve(subset, i + 1, nums);

    subset.push_back(nums[i]);
    solve(subset, i + 1, nums);
    subset.pop_back();
}

vector<vector<int>> subsets(vector<int> &nums)
{
    int i = 0;
    vector<int> subset;
    solve(subset, i, nums);
    return v;
}

int main()
{

    return 0;
}