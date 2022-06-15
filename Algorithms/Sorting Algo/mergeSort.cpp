#include "/Users/na/stdc++.h"
using namespace std;

void merge(int a[], int l, int m, int r)
{
    // size of two arrays to merge
    int n1 = m - l + 1;
    int n2 = r - m;

    // temporary arrays
    int b[n1], c[n2];
    for (int i = 0; i < n1; i++)
        b[i] = a[l + i];
    for (int i = 0; i < n2; i++)
        c[i] = a[m + i + 1];

    // merging two arrays with pointers
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (b[i] <= c[j])
        {
            a[k] = b[i];
            i++;
        }
        else
        {
            a[k] = c[j];
            j++;
        }
        k++;
    }

    // if elements left after comparison
    while (i < n1)
    {
        a[k] = b[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = c[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);

        merge(a, l, mid, r);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}