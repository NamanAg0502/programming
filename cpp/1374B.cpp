#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0, count = 0;
        cin >> n;
        while (true)
        {
            if (n == 1)
            {
                break;
            }
            if (n % 6 == 0)
            {
                n /= 6;
                count++;
            }
            else
            {
                n *= 2;
                count++;
                if (n % 6 != 0)
                {
                    count = -1;
                    break;
                }
                n /= 6;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}