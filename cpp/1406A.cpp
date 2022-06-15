#include "/Users/na/stdc++.h"
using namespace std;

#define PI 3.1415926535897932384626
#define MOD 1000000007 // 998244353
#define vi vector<int>
#define ll long long
#define ull unsigned long long
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

int main()
{
    w(t)
    {
        int n;
        cin >> n;
        int arr[n], zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                zero++;
            }
        }
        sort(arr, arr + n);
        if (zero == 0 || n == 1)
        {
            pe(0);
        }
        else if (zero == 1)
        {
            for (int i = 1; i < n; i++)
            {
                if (arr[i] - arr[i - 1] > 1)
                {
                    pe(arr[i - 1] + 1);
                }
                else if (i == n - 1)
                {
                    pe(arr[i] + 1);
                }
            }
        }
        else if (zero >= 2)
        {
            vector<int> a, b;
            int x = 0, y = 0;
            for (int i = 1; i < n; i++)
            {
                if ((arr[i] - arr[i - 1]) == 1)
                {
                    a.pb(arr[i - 1]);
                }
                else if ((arr[i] - arr[i - 1]) == 0)
                {
                    b.pb(arr[i - 1]);
                }
                else if ((arr[i] - arr[i - 1]) > 1)
                {
                    x = arr[i - 1] + 1;
                    a.pb(arr[i - 1]);
                    b.pb(arr[i]);
                    i++;
                }
                if (i == (n - 1))
                {
                    a.pb(arr[i]);
                }
            }
            for (int i = 1; i < b.size(); i++)
            {
                if (b[i] - b[i - 1] > 1)
                {
                    y = (b[i - 1] + 1);
                }
                else
                {
                    y = (b[n - 1] + 1);
                }
            }
            pe(x + y);
        }
    }
    return 0;
}