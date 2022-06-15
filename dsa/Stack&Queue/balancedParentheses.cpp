#include "/Users/na/stdc++.h"
using namespace std;

unordered_map<char, int> m{
    {'[', -3},
    {'{', -2},
    {'(', -1},
    {']', 3},
    {'}', 2},
    {')', 1},
};
string isBalanced(string s)
{
    stack<char> st;
    for (auto &br : s)
    {
        if (m[br] < 0)
            st.push(br);
        else
        {
            if (st.empty())
                return "NO";
            char top = st.top();
            st.pop();
            if (m[top] + m[br] != 0)
                return "NO";
        }
    }
    if (st.empty())
        return "YES";
    else
        return "NO";
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        cout << isBalanced(str) << endl;
    }
    return 0;
}