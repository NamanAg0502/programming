#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[k];
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        int x, y, l = 0;
        x = arr[0];
        y = n - arr[k - 1] + 1;
        for (int i = 1; i < k; i++)
        {
            int z = (arr[i] - arr[i - 1]) + 1;
            if (z % 2 == 0)
            {
                z = z >> 1;
            }
            else
            {
                z = z >> 1;
                z++;
            }
            l = max(z, l);
        }
        cout << max(l, max(x, y)) << endl;
    }
    return 0;
}