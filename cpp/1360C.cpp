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
        int arr[n], even = 0, odd = 0, ones = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2)
                odd++;
            else
                even++;
        }
        sort(arr, arr + n);
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] == 1)
            {
                ones++;
            }
        }
        if (odd % 2 && ones == 0)
        {
            pe("NO");
        }
        else
        {
            pe("YES");
        }
    }
    return 0;
}