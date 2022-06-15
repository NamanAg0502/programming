#include "/Users/na/stdc++.h"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int len = to_string(n).length();
    int arr[len];
    for (int i = len - 1; i >= 0; i--)
    {
        arr[i] = n % 10;
        n /= 10;
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
}

int main()
{
    solve();
    return 0;
}