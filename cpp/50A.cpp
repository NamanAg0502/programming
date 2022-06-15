#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   
   int m, n, count;
   cin >> m >> n;
   int a= min(m, n);
   int b= max(m, n);
    if(a >= 2){
       count = (a/2)*b;
       count += (a%2)*(b/2);
       cout << count << endl;
    }
    else if(a == 1 && b >= 2){
       count = (b/2);
       cout << count << endl;
   }
   else{
       cout << 0 << endl;
   }

   return 0;
}