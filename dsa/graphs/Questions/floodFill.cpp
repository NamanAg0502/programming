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

void dfs(int i, int j, vector<vector<int>> &image, int initialColor, int newColor)
{
    int n = image.size();
    int m = image[0].size();

    if (i < 0 || j < 0)
        return;
    if (i >= n || j >= m)
        return;
    if (image[i][j] != initialColor)
        return;

    image[i][j] = newColor;

    dfs(i - 1, j, image, initialColor, newColor);
    dfs(i + 1, j, image, initialColor, newColor);
    dfs(i, j - 1, image, initialColor, newColor);
    dfs(i, j + 1, image, initialColor, newColor);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    int initialColor = image[sr][sc];
    if (initialColor != newColor)
        dfs(sr, sc, image, initialColor, newColor);
    return image;
}

int main()
{

    return 0;
}