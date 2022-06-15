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
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        int max_sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int curr_sum = 0;
                int a = i, b = j;
                while (a >= 0 && a < n && b >= 0 && b < m)
                {
                    curr_sum += arr[a][b];
                    a--;
                    b--;
                }
                a = i, b = j;
                while (a >= 0 && a < n && b >= 0 && b < m)
                {
                    curr_sum += arr[a][b];
                    a++;
                    b--;
                }
                a = i, b = j;
                while (a >= 0 && a < n && b >= 0 && b < m)
                {
                    curr_sum += arr[a][b];
                    a--;
                    b++;
                }
                a = i, b = j;
                while (a >= 0 && a < n && b >= 0 && b < m)
                {
                    curr_sum += arr[a][b];
                    a++;
                    b++;
                }
                curr_sum -= arr[i][j] * 3;
                max_sum = max(max_sum, curr_sum);
            }
        }
        pe(max_sum);
    }
    return 0;
}