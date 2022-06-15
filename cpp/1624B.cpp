#include "/Users/na/stdc++.h"
using namespace std;

void ap(int a, int b, int c)
{
    if (((c - b) == (b - a)) || ((a - b) == (b - c)))
    {
        cout << "YES" << endl;
        return;
    }
    // a*m
    int x;
    if (c >= b)
    {
        x = (c - b);
        int A = b - x;
        if (A > a && A % a == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (b > c)
    {
        x = (b - c);
        int A = b + x;
        if (A > a && A % a == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }

    // c*m
    if (a >= b)
    {
        x = (a - b);
        int A = b - x;
        if (A > c && A % c == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (b > a)
    {
        x = (b - a);
        int A = b + x;
        if (A > c && A % c == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }

    // b*m
    x = (a + c) / 2;
    if (x % b == 0)
    {
        b = x;
        if (((c - b) == (b - a)) || ((a - b) == (b - c)))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, m;
        cin >> a >> b >> c;
        ap(a, b, c);
    }
    return 0;
}