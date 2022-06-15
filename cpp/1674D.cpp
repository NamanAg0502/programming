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
        bool flag = false;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int x = 0, i = 0;
        if (n % 2)
        {
            x = arr[0];
            i = 1;
        }
        for (; i < n - 1; i += 2)
            if (arr[i] >= x && arr[i + 1] >= x)
                x = max(arr[i], arr[i + 1]);
            else
                flag = true;
        if (flag)
        {
            pe("NO");
        }
        else
            pe("YES");
    }
    return 0;
}

//