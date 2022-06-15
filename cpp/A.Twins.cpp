#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   
   int n, sum = 0, count = 0, newSum = 0;
   cin >> n;
   int arr[n]; 
   for(int i=0; i<n; i++){
       cin >> arr[i];
       sum += arr[i];
   }
   sum = sum/2;
   sort(arr, arr + n);
   for(int i=n-1; i > -1; i--){
       newSum += arr[i];
       count++;
       if(newSum > sum){
           break;
       }
   }
    cout << count << endl;

   return 0;
}