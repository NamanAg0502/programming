#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n,k;
   cin >> n >> k;
   int arr[n], temp[n], count =0;
   for(int i=0; i<n; i++){
       cin >> arr[i];
       if((5-arr[i]) >= k){
           temp[count++] = arr[i];
       }
   }
   if(count > 2){
       cout << count/3 << endl;
   }
   else{
       cout << 0 << endl;
   }
   return 0;
}