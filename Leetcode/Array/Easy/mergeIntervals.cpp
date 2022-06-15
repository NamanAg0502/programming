#include "/Users/na/stdc++.h"
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &a)
{
    int n = a.size();
    for (int i = n - 1; i >= 0; i--)
    {
        while (a[i][0] <= a[i - 1][1])
        {
            a[i - 1][1] = a[i][1];
            // cout << a[i][0] << ", " << a[i][1] << " ";
            a.pop_back();
            if (i == 1)
            {
                break;
            }
            // cout << a[i][0] << ", " << a[i][1] << endl;
        }
    }
    return a;
}

int main()
{
    vector<vector<int>> a{{1, 4}, {4, 5}};
    int n = a.size();
    merge(a);
    for (int i = 0; i < n; i++)
    {
        cout << a[i][0] << ", " << a[i][1] << endl;
    }
    return 0;
}