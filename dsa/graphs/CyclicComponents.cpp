#include "/Users/na/stdc++.h"
using namespace std;
const int N = 1e3 + 10;

vector<int> g[N];
bool vis[N];

bool dfs(int vertex, int parent)
{

    vis[vertex] = true;
    bool isLoopExits = false;
    for (int child : g[vertex])
    {
        if (vis[child] && child == parent)
            continue;
        if (vis[child])
            return true;

        isLoopExits |= dfs(child, vertex);
    }
    return isLoopExits;
}

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bool isLoopExits = false;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;
        if (dfs(i, 0))
        {
            isLoopExits = true;
            break;
        }
    }

    cout << isLoopExits << endl;

    // for(int child : )

    return 0;
}