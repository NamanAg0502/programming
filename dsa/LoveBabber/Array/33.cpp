#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int count = 0;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else if (arr[i] < arr[j])
        {
            count++;
            arr[i + 1] += arr[i];
            i++;
        }
        else
        {
            count++;
            arr[j - 1] += arr[j];
            j--;
        }
    }

    cout << count << endl;
    return 0;
}