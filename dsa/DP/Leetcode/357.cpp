#include "/Users/na/stdc++.h"
using namespace std;

int solve(int n)
{
    if (n == 0)
        return 0;
    int ans = 0;
    ans += solve(n - 1);
    return ans;
}

int countNumbersWithUniqueDigits(int n)
{
    int ans = solve(n);
    if (n > 2)
    {
        ans = ans * (n - 2) * 9;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << countNumbersWithUniqueDigits(n) << endl;
    return 0;
}