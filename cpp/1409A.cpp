#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n,count = 0;
   cin >> n;
   for(int i=0; i<n; i++){
       int x, y;
       cin >> x >> y;
       if(x == y){
           count = 0;
       }
       else if(y-x <= 10 && y-x > 0){
           count = 1;
       }
       else if(y-x > 10){
           if((y-x)%10 == 0){
               count = (y-x)/10;
           }
           else{
               count = (y-x)/10 + 1;
           }
       }
       else if(y-x < 0 && y-x >= -10){
           count = 1;
       }
       else if(x - y > 10){
           if((x-y)%10 == 0){
               count = (x-y)/10;
           }
           else{
               count = (x-y)/10 + 1;
           }
       }
       cout << count << endl;
   }
   return 0;
}