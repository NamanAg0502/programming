#include "/Users/na/stdc++.h"
using namespace std;

void countSort(int arr[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
        k = max(k, arr[i]);

    int a[10] = {0};

    for (int i = 0; i < n; i++)
        a[arr[i]]++;

    for (int i = 1; i < 10; i++)
        a[i] += a[i - 1];

    int temp[n];
    for (int i = 0; i < n; i++)
        temp[a[arr[i]--] - 1] = arr[i];

    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    countSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}