#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   
   int n;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++){
       cin >> arr[i];
   }
   for(int i=0; i<n; i++){
       for(int j=i+1; j<n; j++){
           if(arr[j] < arr[i]){
               int temp = arr[j];
               arr[j] = arr[i];
               arr[i] = temp;
           }
       }
   }
//    for(int i=0; i<n; i++){
//        cout<<arr[i]<< endl;
//    }
    for(int it : arr){
        cout << it<< endl;
    }
   return 0;
}