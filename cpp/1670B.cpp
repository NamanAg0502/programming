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
        string str;
        cin >> str;
        int m;
        cin >> m;
        char arr[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        int last_ptr = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < m; j++)
            {
                if (str[i] == arr[j])
                {
                    last_ptr = i;
                    break;
                }
            }
            if (last_ptr >= 0)
                break;
        }
        int cnt = 0;
        if (last_ptr == -1 || last_ptr == 0)
            cnt = 0;
        else
        {
            int curr = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (str[i] == arr[j])
                    {
                        last_ptr -= (i - curr);
                        curr = i;
                    }
                }
                p(str);
            }
        }
        pe(cnt);
    }
    return 0;
}