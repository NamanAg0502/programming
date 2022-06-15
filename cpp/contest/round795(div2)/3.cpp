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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int sum = 0;
        if (n <= 1)
        {
            sum = stoi(s);
        }
        else
        {
            for (int i = n - 1; i > 0; i--)
            {
                if (k == 0)
                    break;
                if (s[i] == '0' && s[i - 1] == '1')
                {
                    char temp = s[i - 1];
                    s[i - 1] = s[i];
                    s[i] = temp;
                    k--;
                }
            }
            for (int i = 0; i < n - 1; i++)
            {
                string b = s;
                int x = stoi(b.substr(i, 2));
                sum += x;
            }
        }
        pe(sum);
    }
    return 0;
}