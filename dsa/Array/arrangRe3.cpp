#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k, l;
    int b[n];
    for (int i = 0; i < n; i++)
        b[i] = arr[i];
    sort(b, b + n);
    k = 0;
    l = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            arr[i] = b[l];
            l--;
        }
        else
        {
            arr[i] = b[k];
            k++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}