#include "/Users/na/stdc++.h"
using namespace std;

void reverse(vector<char> &s, int i)
{
    if (i == s.size())
        return;
    s.pop_back();
    reverse(s, i + 1);
    s.push_back(s[i]);
}

void reverseString(vector<char> &s)
{
    reverse(s, 0);
}

int main()
{

    return 0;
}