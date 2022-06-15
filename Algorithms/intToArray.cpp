#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = to_string(n);
    int l = s.length();
    int arr[l];
    for (int i = 0; i < s.length(); i++)
    {
        arr[i] = s[i] - 48;
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}