#include "/Users/na/stdc++.h"
using namespace std;
vector<vector<int>> ans;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    sort(v.begin(), v.end()); // important
    do
    {
        ans.push_back(v);
    } while (next_permutation(v.begin(), v.end()));
    for (auto v : ans)
    {
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}