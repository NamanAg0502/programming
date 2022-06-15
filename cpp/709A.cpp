#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    int count = 0, sum = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (x > b)
        {
            continue;
        }
        sum += x;
        if (sum > d)
        {
            sum = 0;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}