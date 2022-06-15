#include "/Users/na/stdc++.h"
using namespace std;

int minTimeToVisitAllPoints(vector<vector<int>> &v)
{
    int n = v.size();
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        x = abs(v[i + 1][0] - v[i][0]);
        y = abs(v[i + 1][1] - v[i][1]);
        count += max(x, y);
    }
    return count;
}

int main()
{
    vector<vector<int>> v{{3, 2}, {-2, 2}};
    cout << minTimeToVisitAllPoints(v);
    return 0;
}