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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n % 2)
        {
            pe("NO");
        }
        else
        {
            int mid = n / 2;
            sort(a, a + n);
            unordered_map<int, int> m;
            for (int i = 0; i < n; i++)
            {
                m[a[i]]++;
            }
            bool flag = false;
            for (auto &it : m)
            {
                if (it.second > mid || (it.second == mid && a[mid] == a[mid - 1]))
                {
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                pe("YES");
                for (int i = 0; i < mid; i++)
                {
                    p(a[i]);
                    p(a[mid + i]);
                }
                ce;
            }
            else
            {
                pe("NO");
            }
        }
    }
    return 0;
}