#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    char x, y;
    cin >> x >> y;
    long long n;
    cin >> n;
    int rem = n % 4;
    if ((x == 'v' && y == '^') || (x == '>' && y == '<') || (rem == 0))
    {
        cout << "undefined" << endl;
    }
    else if (rem == 1)
    {
        if ((x == '^' && y == '>') || (x == '>' && y == 'v') || (x == 'v' && y == '<') || (x == '<' && y == '^'))
            cout << "cw" << endl;

        else
        {
            cout << "ccw" << endl;
        }
    }
    else if (rem == 3)
    {
        if ((x == '^' && y == '<') || (x == '>' && y == '^') || (x == 'v' && y == '>') || (x == '<' && y == 'v'))
            cout << "cw" << endl;

        else
        {
            cout << "ccw";
        }
    }
    else
    {
        cout << "undefined";
    }

    return 0;
}