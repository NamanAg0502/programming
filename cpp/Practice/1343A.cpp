#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 2, x = n;
        cin >> n;
        while (true)
        {
            int div = n % ((2 * k) - 1);
            if (div == 0)
            {
                x = n / ((2 * k) - 1);
                break;
            }
            k *= 2;
        }
        cout << x << endl;
    }
    return 0;
}