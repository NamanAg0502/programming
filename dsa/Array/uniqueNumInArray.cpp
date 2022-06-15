#include "/Users/na/stdc++.h"
using namespace std;

int setBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void uniqueXOR(int a[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum ^= a[i];
    }
    int tempXor = xorSum;
    int setbit = 0, pos = 0;
    while (setbit != 1)
    {
        setbit = xorSum & 1;
        pos++;
        xorSum = (xorSum >> 1);
    }
    int newXor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(a[i], pos - 1))
        {
            newXor ^= a[i];
        }
    }
    cout << newXor << endl;
    cout << (newXor ^ tempXor) << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3, 5, 7};
    uniqueXOR(arr, 8);
    return 0;
}