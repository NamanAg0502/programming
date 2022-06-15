#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            int x = arr[i] - arr[0];
            sum += x;
        }
        cout << sum << endl;
    }
    return 0;
}