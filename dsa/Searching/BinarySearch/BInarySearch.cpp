#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    int lo = 0, hi = n - 1;
    int mid;
    while (hi - lo > 1)
    {
        mid = (hi + lo) / 2;
        if (a[lo] < k)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (a[lo] == k)
    {
        cout << lo << '\n';
    }
    else if (a[hi] == k)
    {
        cout << hi << '\n';
    }
    else
    {
        cout << "NOT FOUND" << endl;
    }
    return 0;
}