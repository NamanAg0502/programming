#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int a,b,c,d;
   cin >> a >> b >> c >> d;
   int i,j,k;

   if(d > c && d > b && d > a){
        j = (a - b + c)/2;
        i = (b - c + a)/2;
        k = (c - a + b)/2;
   }
   else if(c > d && c > b && c > a){
        j = (a - b + d)/2;
        i = (b - d + a)/2;
        k = (d - a + b)/2;
   }
   else if(b > d && b > c && b > a){
        j = (a - c + d)/2;
        i = (c - d + a)/2;
        k = (d - a + c)/2;
   }
   else if(a > d && a > b && a > c){
        j = (c - b + d)/2;
        i = (b - d + c)/2;
        k = (d - c + b)/2;
   }
   
   cout << i << " " << j << " " << k;
   return 0;
}