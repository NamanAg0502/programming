#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n, count = 0;
   cin >> n;
   int arr[n], temp[n];
   for(int i=0; i<n; i++){
       cin >> arr[i];
   }
   for(int i=0; i<n; i++){
       if(arr[i] >= 0){
           temp[count++] = arr[i];
       }
   }
   for(int i=0; i<n; i++){
       if(arr[i] < 0){
           temp[count++] = arr[i];
       }
   }
   for(int i=0; i<n; i++){
       cout << temp[i] << " ";
   }

   return 0;
}