#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    char N;
    cin >> N;

    // upper to lower
    char n = (N | (1 << 5));
    cout << n << endl;

    // Lower to upper
    char X = (N ^ (1 << 5));
    cout << X << endl;

    // Value of (1<<5) is " ";

    // upper to lower
    cout << char(N | ' ');

    // lower to upper
    cout << char(N ^ ' ');
    // OR
    cout << char(N & '_');

    return 0;
}