#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 12);
    int i = 0;
    if (n == 0)
    {
        i = 0;
    }
    else if (n > accumulate(arr, arr + 12, 0))
    {
        i = -1;
    }
    else if (n > 0)
    {
        while (n > 0)
        {
            i++;
            n -= arr[12 - i];
        }
    }
    cout << i << endl;
    return 0;
}