#include "/Users/na/stdc++.h"
using namespace std;

void Merge(int arr[], int l, int r, int mid)
{
    int n1 =
}

void MergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        MergeSort(arr, l, r, mid);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mid = n / 2;
    MergeSort(arr, 0, mid);
    MergeSort(arr, mid + 1, n);
    Merge(arr, 0, n, mid);

    return 0;
}