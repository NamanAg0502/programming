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
#define f(a, n)                 \
    for (int i = 0; i < n; i++) \
    cout << a[i] << ' '
#define pf(a)             \
    for (auto &(i) : (a)) \
        cout << i << ' ';
#define p(a) cout << a << ' '
#define pe(a) cout << a << endl;
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define arr(a, n)               \
    int n;                      \
    cin >> n;                   \
    int a[n];                   \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define ce cout << endl;
#define setbits(x) __builtin_popcount(x)

int main()
{
    w(t)
    {
        int n;
        cin >> n;
        string str1, str2;
        cin >> str1 >> str2;

        bool flag = true;
        if (count(str1.begin(), str1.end(), 'b') != count(str2.begin(), str2.end(), 'b'))
            flag = false;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (str1[i] == 'b')
                continue;
            while (str2[j] == 'b')
                j++;

            if (str1[i] != str2[j] || str1[i] == 'a' && i > j || str1[i] == 'c' && i < j)
            {
                flag = false;
                break;
            }
            j++;
        }
        if (flag)
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