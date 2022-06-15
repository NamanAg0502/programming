#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n, k = 0, count = 0;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++){
       cin >> arr[i];
   }
    k = arr[0];
   for(int i=1; i<n; i++){
       if(k < arr[i]){
           k = arr[i];
           count++;
       }
       else{
           continue;
       }
   }
   k = arr[0];
   for(int i=1; i<n; i++){
       if(k > arr[i]){
           k = arr[i];
           count++;
       }
       else{
           continue;
       }
   }

   cout << count << endl;
   return 0;
}