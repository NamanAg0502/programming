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

int main()
{
    int n;
    cin >> n;
    long long count = 0;
    int arr[n];
    int neg = 0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < -1)
        {
            count += (-1) * arr[i] - 1;
            neg++;
        }
        else if (arr[i] > 1)
        {
            count += arr[i] - 1;
        }
        else if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == -1)
        {
            neg++;
        }
    }
    if (zero > 0)
        count += zero;
    else if (neg % 2 == 1 && zero == 0)
        count += 2;
    p(count);
    return 0;
}