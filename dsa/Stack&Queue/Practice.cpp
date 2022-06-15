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
    int b[2 * n];
    for (int i = 0; i < 2 * n; i++)
    {
        b[i] = a[i % n];
    }
    for (int i = 0; i < 2 * n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}