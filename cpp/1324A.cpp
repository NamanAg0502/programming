#include "/Users/na/stdc++.h"
using namespace std;

#define PI 3.1415926535897932384626
#define MOD 1000000007 // 998244353
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define pb push_back
#define eb emplace_back
#define mp(a, b) make_pair(a, b)
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define f(i, a) for (auto &(i) : (a))
#define pf(a)             \
    for (auto &(i) : (a)) \
    cout << i << ' '
#define p(a) cout << a << ' '
#define pe(a) cout << a << endl;
#define rsort(a) sort((a).rbegin(), (a).rend())
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define max3(a, b, c) max((a), max((b), (c)))
#define min3(a, b, c) min((a), min((b), (c)))

bool check(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[0] != a[i])
            return false;
    }
    return true;
}

int main()
{
    w(t)
    {
        int n;
        cin >> n;
        int arr[n];
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m = max(m, arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if ((m - arr[i]) % 2 == 0)
            {
                arr[i] += (m - arr[i]);
            }
            else
            {
                break;
            }
        }
        if (check(arr, n))
        {
            pe("YES");
        }
        else
        {
            pe("NO");
        }
    }
    return 0;
}