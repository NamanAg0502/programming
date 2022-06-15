#include "/Users/na/stdc++.h"
using namespace std;

int findNumbers(vector<int> &nums)
{
    vector<string> s(nums.size());
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        s[i] = to_string(nums[i]);
        if (s[i].length() % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> nums{555, 901, 482, 1771};
    cout << findNumbers(nums);
    return 0;
}