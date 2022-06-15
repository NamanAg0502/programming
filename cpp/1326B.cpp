#include "/Users/na/stdc++.h"
using namespace std;

int main()
{

    int n;
    cin >> n;
    int b[n], a[n], x[n];
    int j = 1;
    x[1] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    while (j <= n)
    {
        a[j] = b[j] + x[j];
        x[j + 1] = max(a[j], x[j]);
        j++;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}