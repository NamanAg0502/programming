#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int n, k = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    k = arr[0];
    int count = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (k > arr[i])
        {
            v.push_back(count);
            count = 0;
        }
        count++;
        k = arr[i];
    }
    v.push_back(count);
    sort(v.begin(), v.end());
    cout << v.back() << endl;
    return 0;
}