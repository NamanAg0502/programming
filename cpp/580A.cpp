#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   
   int n;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++){
       cin >> arr[i];
   }
   string str = "";
   for(int i=1; i<n; ++i){
       if(arr[i] >= arr[i-1]){
           str = str + '1';
       }
       else{
           str = str + '0';
       }
   }
   
   return 0;
}