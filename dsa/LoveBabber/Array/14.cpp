#include "/Users/na/stdc++.h"
using namespace std;

void nextPermutation(vector<int> &nums)
{
    auto max = max_element(nums.begin(), nums.end());
    auto min = min_element(nums.begin(), nums.end());
    cout << --nums.end() << endl;
    if (min != --nums.end())
    {
        for (auto i = min + 1; i < nums.end(); i++)
        {
            if (nums[*i] < nums[*i + 1])
            {
                swap(nums[*i], nums[*i + 1]);
                break;
            }
            else
            {
                int temp = nums[*min];
                for (auto j = min + 1; j < nums.end(); j++)
                {
                    nums[*i - 1] = nums[*i];
                }
                nums[nums.size() - 1] = temp;
            }
        }
    }
}

int main()
{
    vector<int> nums{2, 6, 4, 1, 2, 3, 4};
    nextPermutation(nums);
    for (auto &it : nums)
    {
        cout << it << " ";
    }
    return 0;
}