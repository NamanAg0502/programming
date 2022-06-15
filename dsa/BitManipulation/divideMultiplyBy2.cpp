#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
   int n;
   cin >> n;

   // For Multiply
   cout << (n << 1) << endl;
   // Before: 2^2*1 + 2^1*0 + 2^0*1 || 101
   // After: 2^3*1 + 2^2*0 + 2^1*1 + 2^0*0; || 1010

   // For Divide
   cout << (n >> 1) << endl;
   // Before: 2^2*1 + 2^1*0 + 2^0*1 || 101
   // After: 2^1*1 + 2^0*0 || 10

   return 0;
}