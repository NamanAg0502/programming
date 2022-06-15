#include "/Users/na/stdc++.h"
using namespace std;

void solve(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);
        cout << ans << " ";
        cout << ros << " ";
        solve(ros, ans + ch);
    }
}

int main()
{
    solve("ABC", "");
    return 0;
}