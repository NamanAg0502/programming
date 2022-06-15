#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int x, count = 0;
        cin >> x;
        for (int i = 0; i < n; i++)
        {
            arr[n - i - 1] = x % 10;
            x /= 10;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] != arr[i + 1] && i % 2 == 0)
            {
                if (arr[i] == 0)
                {
                    arr[i + 1] = 0;
                    count++;
                }
                else
                {
                    arr[i] = 0;
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}