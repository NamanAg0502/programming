#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    int i = 0, j = 0;
    while ((i) < (n + j))
    {
        i++;
        if (i % m == 0)
        {
            j++;
        }
    }
    cout << i;

    return 0;
}