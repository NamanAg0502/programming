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

int leastSignificantBit(int number)
{
    int index = 0;

    while ((~number) & 1)
    {
        number >>= 1;
        index++;
    }
    return index;
}

int main()
{
    w(t)
    {
        int n;
        cin >> n;
        int arr[n], even = 0, odd = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (odd > 0)
        {
            cnt = even;
        }
        else
        {
            int minVal = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                minVal = min(minVal, leastSignificantBit(arr[i]));
            }
            cnt = minVal + even - 1;
        }
        pe(cnt);
    }
    return 0;
}