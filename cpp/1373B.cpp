#include "/Users/na/stdc++.h"
using namespace std;

void oneSum()
{
    string str;
    cin >> str;
    int zero = 0, one = 0;
    for (auto i : str)
    {
        if (i == '0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    int ans = min(zero, one);
    if (ans % 2)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NET" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        oneSum();
    }
    return 0;
}