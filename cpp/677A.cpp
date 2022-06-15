#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n, h;
   cin >> n >> h;
   int arr[n], arr2[n];
   for(int i=0; i<n; i++){
       cin >> arr[i];
       if(arr[i] > h){
           arr2[i] = 2;
       }
       else{
           arr2[i] = 1;
       }
   }
   cout << accumulate(arr2, arr2 + n, 0) << endl;;

   return 0;
}