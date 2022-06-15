#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    string s;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            s = s + str[0];
        }
        else
        {
            s = str[0] + s;
        }
        str = str.substr(1);
        n--;
    }
    cout << s << endl;
    return 0;
}