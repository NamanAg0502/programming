#include "/Users/na/stdc++.h"
using namespace std;

#define PI 3.1415926535897932384626
#define MOD 1000000007 // 998244353
#define vi vector<int>
#define ll long long
#define ull unsigned long long
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define pb push_back
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define f(i, a) for (auto &(i) : (a))
#define pf(a)             \
    for (auto &(i) : (a)) \
        cout << i << ' ';
#define p(a) cout << a << ' '
#define pe(a) cout << a << endl;
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define ce cout << endl;

int main()
{
    w(t)
    {
        int n;
        cin >> n;
        int arr[n];
        ll odd = 0, even = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i != 0 && i != n - 1)
            {
                sum += arr[i];
                if (arr[i] % 2)
                    odd++;
                else
                    even++;
            }
        }
        if (sum == n - 2 || (odd == 1 && n == 3))
        {
            pe(-1);
        }
        else
        {
            sum = 0;
            for (int i = 1; i < n - 1; i++)
            {
                if (arr[i] % 2)
                    sum += arr[i] / 2 + 1;
                else
                {
                    sum += arr[i] / 2;
                }
            }
            pe(sum);
        }
    }
    return 0;
}