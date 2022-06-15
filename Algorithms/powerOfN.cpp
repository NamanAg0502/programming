#include "/Users/na/stdc++.h"
using namespace std;

int Power(int n, int p)
{
    return p == 0 ? 1 : n * Power(n, p - 1);
}

int main()
{
    int n, p;
    cin >> n >> p;
    cout << Power(n, p) << endl;

    return 0;
}