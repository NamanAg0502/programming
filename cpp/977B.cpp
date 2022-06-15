#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    string str, s, s1;
    cin >> str;
    int max = 0;
    map<string, int> map;
    for (int i = 0; i < t; i++)
    {
        string s = str.substr(i, 2);
        map[s]++;
    }
    int k = 0;
    for (auto it : map)
    {
        if (k < it.second)
        {
            k = it.second;
        }
    }
    for (auto it = map.rbegin(); it != map.rend(); it++)
    {
        if (k == it->second)
        {
            if (it->first.length() < 2)
            {
                continue;
            }
            else
            {
                cout << it->first << endl;
                break;
            }
        }
    }
    return 0;
}