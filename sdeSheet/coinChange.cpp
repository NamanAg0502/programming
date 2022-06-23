#include "/Users/na/stdc++.h"
using namespace std;

long long int count(int S[], int m, int n)
{
    long long int table[n + 1];
    memset(table, 0, sizeof(table));
    table[0] = 1;
    for (int i = 0; i < m; i++)
        for (int j = S[i]; j <= n; j++)
            table[j] += table[j - S[i]];

    return table[n];
}

int main()
{
    int n = 4, m = 3;
    int S[] = {1,
               2,
               3};
    cout << count(S, m, n) << endl;

    return 0;
}