#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        string s, str;
        for (int j = 97; j < 97 + l; j++)
        {
            char c = j;
            s += c;
        }
        while (str.length() < n)
        {
            str += s;
            if (str.length() >= n)
            {
                str.erase(n);
            }
        }
        cout << str << endl;
    }
    return 0;
}