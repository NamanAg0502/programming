#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x & 1)
        {
            odd++;
        }
    }
    cout << min(odd, n - odd) << endl;
    return 0;
}