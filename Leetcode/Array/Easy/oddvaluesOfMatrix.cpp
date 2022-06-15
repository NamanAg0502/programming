#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int m, n, count = 0;
    cin >> m >> n;
    vector<vector<int>> v{{0, 1}, {1, 1}};
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[v[i][0]][j]++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[j][v[i][1]]++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((arr[i][j] & 1) != 0)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}