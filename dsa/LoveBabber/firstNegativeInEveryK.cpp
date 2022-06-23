#include "/Users/na/stdc++.h"
using namespace std;

long long int maximizeSum(long long int a[], int n, int k)
{
    // Your code goes here
    long long sum = accumulate(a, a + n, 0);

    sort(a, a + n);
    int i = 0;
    for (i = 0; i < n && k > 0; i++)
    {
        if (a[i] < 0)
        {
            a[i] *= -1;
            sum += (2 * a[i]);
            k--;
        }
    }

    if (k > 0)
    {
        int m = *min_element(a, a + n);
        if (k % 2)
            sum -= (2 * m);
    }

    return sum;
}

int main()
{
    long long n = 10, k = 5;
    long long arr[] = {5, -2, 5, -4, 5, -12, 5, 5, 5, 20};
    cout << maximizeSum(arr, n, k);
    return 0;
}