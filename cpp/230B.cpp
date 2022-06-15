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

const int N = 1e6 + 10;

vector<bool> isPrime(N, 1);

void primeOrNot(int n)
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
        if (isPrime[i] == true)
            for (int j = 2 * i; j < N; j += i)
                isPrime[j] = false;
}

void solve()
{
    long long x;
    cin >> x;
    long long k = sqrt(x);
    if (k * k == x)
        if (isPrime[k] == true)
        {
            pe("YES");
        }
        else
        {
            pe("NO");
        } //
    else
    {
        pe("NO");
    }
}

int main()
{
    int n;
    cin >> n;
    primeOrNot(N);
    for (int i = 0; i < n; i++)
    {
        solve();
    }
    return 0;
}