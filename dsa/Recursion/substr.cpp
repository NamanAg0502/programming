#include "/Users/na/stdc++.h"
using namespace std;

void subStr(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char c = s[0];
    string ros = s.substr(1);

    subStr(ros, ans);
    subStr(ros, ans + c);
}

int main()
{
    string s = "ABC";
    string ans = "";
    subStr(s, ans);

    return 0;
}