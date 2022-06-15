#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int a, b,c, count = 0, count2 = 0, d;
   cin >> a >> b;
   c = max(a,b);
   count = min(a,b);
   d = c - count;
   count2 = d/2;
   cout << count << " " << count2 << endl;
   return 0;
}