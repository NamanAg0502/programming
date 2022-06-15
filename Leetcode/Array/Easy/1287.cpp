#include "/Users/na/stdc++.h"
using namespace std;

int findSpecialInteger(vector<int> &v)
{
    int count, j = 0;
    while (true)
    {
        count = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[j] == v[i])
            {
                count++;
            }
        }
        j++;
        if (count > v.size() / 4)
        {

            break;
        }
    }
    return v[j - 1];
}

int main()
{
    vector<int> v{1, 1};
    cout << findSpecialInteger(v);
    return 0;
}