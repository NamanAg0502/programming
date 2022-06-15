#include "/Users/na/stdc++.h"
using namespace std;

void solve(string s, string ans)
{
    if (s.empty())
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    solve(ros, ans);
    solve(ros, ch + ans);
    solve(ros, to_string(int(ch)) + ans);
}

int main()
{
    string s = "AB";
    string ans = "";
    solve(s, ans);
    return 0;
}