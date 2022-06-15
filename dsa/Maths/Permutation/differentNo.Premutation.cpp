#include "/Users/na/stdc++.h"
using namespace std;

vector<vector<int>> ans;

void permute(vector<int> &v, int k)
{
    if (k == v.size())
    {
        ans.push_back(v);
        return;
    }
    for (int i = k; i < v.size(); i++)
    {
        swap(v[i], v[k]);
        permute(v, k + 1);
        swap(v[i], v[k]);
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    permute(v, 0);
    for (auto &v : ans)
    {
        for (auto &i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}