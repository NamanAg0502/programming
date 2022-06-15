#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int arr[6];
        for (int i = 0; i < s.length(); i++)
        {
            arr[i] = s[i] - 48;
        }
        if (arr[0] + arr[1] + arr[2] == arr[3] + arr[4] + arr[5])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}