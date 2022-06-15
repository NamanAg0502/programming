#include "/Users/na/stdc++.h"
using namespace std;

int solve(string s)
{
    int sum = 0;
    int n = s.length();
    for (int i = n - 1; i > -1; i--)
    {
        if (s[i] == 'I')
        {
            if (s[i + 1] == 'X' || s[i + 1] == 'V')
            {
                sum += -2;
            }
            sum += 1;
        }
        else if (s[i] == 'V')
        {
            sum += 5;
        }
        else if (s[i] == 'X')
        {
            if (s[i + 1] == 'L' || s[i + 1] == 'C')
            {
                sum += -20;
            }
            sum += 10;
        }
        else if (s[i] == 'L')
        {
            sum += 50;
        }
        else if (s[i] == 'C')
        {
            if (s[i + 1] == 'D' || s[i + 1] == 'M')
            {
                sum += -200;
            }
            sum += 100;
        }
        else if (s[i] == 'D')
        {
            sum += 500;
        }
        else if (s[i] == 'M')
        {
            sum += 1000;
        }
    }
    return sum;
}

int main()
{
    string s;
    cin >> s;
    int n = solve(s);
    cout << n << endl;
    return 0;
}