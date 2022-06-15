#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
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
    int k = min(one, zero);
    cout << str.length() - 2 * k << endl;

    return 0;
}