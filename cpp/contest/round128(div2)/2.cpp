#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int up, left;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < m; j++)
            {
                arr[i][j] = s[j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 'R')
                {
                    int b = up;
                    up = i;
                    left = j;
                    if (b < up)
                    {
                        up = b;
                    }
                }
            }
        }
        cout << up << " " << left << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j][i] == 'R')
                {
                    if (left > i)
                    {
                        left = i;
                        break;
                    }
                }
            }
        }
        if (arr[0][0] == 'R')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << up << " " << left << endl;
        }
    }
    return 0;
}