#include "/Users/na/stdc++.h"
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &a)
{
    int n = a.size();
    sort(a.begin(), a.end());
    vector<vector<int>>::iterator it = a.end();
    for (int i = n - 1; i > 0; i--)
    {
        it--;
        if (a[i][0] <= a[i - 1][1] && a[i][1] >= a[i - 1][0])
        {
            if (a[i][1] >= a[i - 1][1])
            {
                a[i - 1][1] = a[i][1];
            }
            if (a[i][0] <= a[i - 1][0])
            {
                a[i - 1][0] = a[i][0];
            }
            a.erase(it);
        }
    }
    return a;
}

int main()
{
    vector<vector<int>> a{{1, 4}, {0, 0}};
    merge(a);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i][0] << " " << a[i][1] << endl;
    }
    return 0;
}