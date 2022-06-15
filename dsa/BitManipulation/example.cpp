#include "/Users/na/stdc++.h"
using namespace std;

bool divideArray(vector<int> &nums)
{
    long long res = 0;
    sort(nums.begin(), nums.end());
    for (auto i : nums)
    {
        cout << i << " ";
        res ^= i;
        cout << res << endl;
        if (res == i || res == 0)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    if (res == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    vector<int> nums{9, 9, 19, 10, 9, 12, 2, 12, 3, 3, 11, 5, 8, 4, 13, 6, 2, 11, 9, 19, 11, 15, 9, 17, 15, 12, 5, 14, 12, 16, 18, 16, 10, 3, 8, 9, 16, 20, 2, 4, 16, 12, 11, 14, 20, 16, 2, 18, 17, 20, 3, 13, 16, 17, 1, 1, 11, 20, 20, 4};
    cout << endl;
    cout << divideArray(nums);

    return 0;
}