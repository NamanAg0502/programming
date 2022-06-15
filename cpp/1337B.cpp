#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, k, l;
        cin >> x >> k >> l;
        if (x <= 10 * l)
        {
            while (x > 0)
            {
                x -= 10;
            }
        }
        else if (x > 10 * l)
        {
            while (k--)
            {
                x = (x / 2) + 10;
                if (x <= 10 * l)
                    break;
            }
            while (l--)
            {
                x -= 10;
                if (x <= 0)
                    break;
            }
        }
        if (x <= 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}