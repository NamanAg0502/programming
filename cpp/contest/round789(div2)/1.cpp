#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        int arr[t];
        int zero = 0, count = 0, times = 0;
        for (int i = 0; i < t; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < t; i++)
        {
            if (arr[i] == 0)
            {
                zero++;
            }
            else if (arr[i] != 0)
            {
                for (int j = i + 1; j < t; j++)
                {
                    if (arr[i] == arr[j])
                    {
                        arr[i] = 0;
                        count++;
                        break;
                    }
                }
            }
        }
        if (zero > 0)
        {
            times = (t - zero);
        }
        else if (count > 0)
        {
            times = (t);
        }
        else
        {
            times = t + 1;
        }
        cout << times << endl;
    }
    return 0;
}