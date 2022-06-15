#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = arr[i];
    }
    sort(b, b + n);
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    int k = 0, l = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            arr[i] = b[k];
            k++;
        }
        else
        {
            arr[i] = b[l];
            l--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}