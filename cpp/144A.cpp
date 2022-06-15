#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   
   int n;
   int max = 0;
   int min = 101;
    int maxI, minI;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++){
       cin >> arr[i];
       if(arr[i] > max){
           max = arr[i];
           maxI = i;
       }
       if(arr[i] <= min){
           min = arr[i];
           minI = i;
       }
   }
   if(maxI > minI){
       cout << (n-minI) + (maxI) - 2; 
   }
   else{
       cout << (n-minI - 1) + (maxI);
   }
   return 0;
}