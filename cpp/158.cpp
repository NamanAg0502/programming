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
    int n;
    cin >> n;
    int arr[n];
    int one = 0, two = 0, three = 0, four = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            one++;
        else if (arr[i] == 2)
            two++;
        else if (arr[i] == 3)
            three++;
        else
            four++;
    }
    int ans = four;
    if (three >= one)
    {
        ans += one;
        three -= one;
        one = 0;
        ans += three;
    }
    else
    {
        ans += three;
        one -= three;
        three = 0;
        two += (one >> 1);
        one -= (one >> 1) * 2;
    }
    if (two % 2 != 0 || one != 0)
    {
        ans += (two >> 1) + 1;
    }
    else
    {
        ans += (two >> 1);
    }
    pe(ans);
    return 0;
}