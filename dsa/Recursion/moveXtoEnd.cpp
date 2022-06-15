#include "/Users/na/stdc++.h"
using namespace std;

string move(string s, char x)
{
    if (s.length() == 0)
    {
        return "";
    }
    char c = s[0];
    string ans = move(s.substr(1), x);
    if (x == c)
        return ans + x;
    else
        return c + ans;
}

int main()
{
    string s;
    char x;
    cin >> s >> x;
    cout << move(s, x);
    return 0;
}