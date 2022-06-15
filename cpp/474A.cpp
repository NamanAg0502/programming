#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    char c;
    cin >> c;
    string s, str;
    cin >> s;
    char arr[3][10] = {{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'}, {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'}, {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'}};
    if (c == 'R')
    {
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 10; k++)
                {
                    if (s[i] == arr[j][k])
                    {
                        str += arr[j][k - 1];
                    }
                }
            }
        }
    }
    else if (c == 'L')
    {
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 10; k++)
                {
                    if (s[i] == arr[j][k])
                    {
                        str += arr[j][k + 1];
                    }
                }
            }
        }
    }
    cout << str << endl;
    return 0;
}