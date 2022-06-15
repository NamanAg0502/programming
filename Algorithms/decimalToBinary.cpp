#include "/Users/na/stdc++.h"
using namespace std;

string decimalToBinary(int n)
{
    string s;
    while (n != 0)
    {
        s += to_string(n % 2);
        n /= 2;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << decimalToBinary(n) << endl;
    return 0;
}