#include "/Users/na/stdc++.h"
using namespace std;

// int minJumps(int a[], int n)
// {

//     return count;
// }

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0, count = 0, j = 0;
    if (arr[0] == 0)
        count = -1;
    else
    {
        while (j < n - 1)
        {
            i = arr[j];
            if (i == 0)
            {
                break;
            }
            j += i;
            count++;
        }
    }
    cout << endl;
    cout << count << endl;
    return 0;
}