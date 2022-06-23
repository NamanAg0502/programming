#include "/Users/na/stdc++.h"
using namespace std;

int minJumps(int a[], int n)
{
    // Your code here
    if (a[0] == 0)
        return -1;

    int steps = 0;
    int jump = 0;
    int cnt = 0;
    int i = 0;
    while (jump < n - 1)
    {
        jump += a[i];
        cnt++;
        int l = 0;
        for (int j = i; j <= jump; j++)
        {
            if (steps < a[j])
            {
                steps = a[j];
                l = j;
            }
        }
        i = l;
        if (jump == 0)
            return -1;
    }
    return cnt;
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i]; //

    cout << minJumps(a, n) << endl;
    return 0;
}