#include "/Users/na/stdc++.h"
using namespace std;

int Sum(int n)
{
    return n == 0 ? 0 : n + Sum(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << Sum(n) << endl;
    return 0;
}