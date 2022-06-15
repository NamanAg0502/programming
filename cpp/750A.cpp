#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n,k, count = 0, sum = 0;
   cin >> n >> k;
   int time = 240 - k;
   for(int i=1; i<=n; i++){
       sum += 5*i;
       if(sum > time){
           break;
       }
       count++;
   }
   cout << count;
   return 0;
}