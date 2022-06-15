#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   
   int n;
   int count = 0;
   cin >> n;
   int a = n;
   while(n > 2){
       count += n/3;
       n = (n/3 + n%3);
   }
   cout << (a + count) << endl;
   return 0;
}