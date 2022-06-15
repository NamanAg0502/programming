#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
       int x;
       cin >> x;
       int arr[x], arr2[x], count = 0;
       for(int j=0; j<x; j++){
           cin >> arr[j];
       }
       sort(arr, arr + x);
       if(x == 1){
           cout << "YES" << endl;
       }
       else{
        for(int i=1; i<x; i++){
           if(arr[i] - arr[i-1] > 1){
               count++;
           }
        }
        if(count != 0){
           cout << "NO" << endl;
        }    
        else{
           cout << "YES" << endl;
        }
       }
   }
   return 0;
}