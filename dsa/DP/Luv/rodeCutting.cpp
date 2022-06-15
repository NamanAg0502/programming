#include "/Users/na/stdc++.h"
using namespace std;

int solve(int len, vector<int> &v)
{
    if (len == 0)
        return 0;
    int ans = 0;
    for (int i = 1; i <= v.size(); i++)
    {
        if (len >= i)
        {
            ans = max(ans, solve(len - i, v) + v[i - 1]);
        }
    }
    return ans;
}

int cutRod(int price[], int n)
{
    // code here
    vector<int> v(price, price + n);
    return solve(n, v);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << cutRod(arr, n);
    return 0;
}