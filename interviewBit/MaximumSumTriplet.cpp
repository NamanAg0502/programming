#include "/Users/na/stdc++.h"
using namespace std;

int solve(vector<int> &A)
{
    long long sum = INT_MIN;
    int n = A.size();
    int i = 0, j = 1, k = 2;
    bool flag = false;
    while (k < n)
    {
        if (A[i] < A[j] && A[j] < A[k])
        {
            flag = true;
            break;
        }
        if (A[j] > A[k])
        {
            j++;
            k++;
        }
        if (A[i] > A[j])
        {
            i++;
            j++;
            k++;
        }
        cout << A[i] << " " << A[j] << " " << A[k] << endl;
    }
    if (flag)
    {
        int l = j + 1;
        while (l < n)
        {
            if (A[k] < A[l])
            {
                k = l;
            }
            l++;
        }
        l = i + 1;
        while (l < k)
        {
            if (A[j] < A[l])
            {
                j = l;
            }
            l++;
        }
        l = 0;
        while (l < j)
        {
            if (A[i] < A[l])
            {
                i = l;
            }
            l++;
        }
        sum = A[i] + A[j] + A[k];
        cout << A[i] << " " << A[j] << " " << A[k] << endl;
        return sum;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << solve(A);
    return 0;
}