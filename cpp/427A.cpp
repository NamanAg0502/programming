#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n, count =0, k = 0;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++){
       cin >> arr[i];
   }
   for(int i=0; i<n; i++){
       if(arr[i] == -1 && k == 0){
           count++;
       }
       else if(arr[i] == -1 && k > 0){
           k --;
       }
       else if(arr[i] != -1){
           k += arr[i];
       }
   }
   cout << count << endl;
   return 0;
}