#include "/Users/na/stdc++.h"
using namespace std;

int search(vector<int> &arr, int target)
{
    int n = arr.size();
    int start = 0, end = n - 1;
    int k;
    while (end - start > 0)
    {
        int mid = (start + end) / 2;
        if (arr[mid] > arr[start])
        {
            start = mid;
        }
        else if (arr[mid] < arr[end])
        {
            end = mid;
        }
        else if (arr[mid] < arr[start] && arr[mid] < arr[end])
        {
            k = mid;
        }
    }
    return target;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    cout << search(nums, 0);
    return 0;
}