#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0, max = 10000001;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = 0; k < m; k++)
                {
                    int x;
                    x = (arr[i][k] - 48) - (arr[j][k] - 48);
                    if (x < 0)
                    {
                        x = (-1) * x;
                    }
                    sum += x;
                }
                if (sum < max)
                {
                    max = sum;
                }
                sum = 0;
            }
        }
        cout << max << endl;
    }
    return 0;
}