#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n,k,i=0, j = 1;
   cin >> n >> k;
   bool b = true;
   while(b){
       i++;
       j = n*i;
       if(j%10 == 0 || j%10 == k){
           b= false;
       }
   }
   cout << i <<endl;
   return 0;
}