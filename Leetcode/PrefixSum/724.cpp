#include "/Users/na/stdc++.h"
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int n = nums.size();
    int sum1[n], sum2[n];
    sum1[0] = 0;
    sum2[0] = 0;
    for (int i = 1; i < n; i++)
    {
        sum1[i] = sum1[i - 1] + nums[i - 1];
        sum2[i] = sum2[i - 1] + nums[n - i];
    }
    int k = -1;
    for (int i = 0; i < n; i++)
    {
        if (sum1[i] == sum2[n - i - 1])
        {
            k = i;
            break;
        }
    }
    return k;
}

int main()
{
    vector<int> v{-1, -1, 0, 1, 1, 0};
    cout << pivotIndex(v);
    return 0;
}