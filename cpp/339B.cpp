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

// Can move only one way -- clockwise;
// n -> no. of house;
// m -> no. of tasks;
// ai -> like ith task in aith home -> 1 task in ai , 2nd task in ai+1;

int main()
{
    int n, m;
    cin >> n >> m;
    int k = 1;
    ll t = 0;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        if (arr[i] < k)
        {
            t += arr[i] + (n - k);
        }
        else
        {
            t += (arr[i] - k);
        }
        k = arr[i];
    }
    pe(t);
    return 0;
}

/* 1 2 3 4
       3
     2
*/