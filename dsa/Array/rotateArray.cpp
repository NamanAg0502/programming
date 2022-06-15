#include "/Users/na/stdc++.h"
using namespace std;

// Reverse algorithm for array rotation

int main(){
   
   int n, d;
   cin >> n;
   int arr[n], temp[n];
   for(int i=0; i<n; i++){
       cin >> temp[i];
        arr[n-i-1] = temp[i];
   }
   cin >> d;
   int arr2[n-d];
   for(int i=0; i<n-d; i++){
       arr2[n-d-1-i] = arr[i];
   }
   int arr3[d];
   for(int i=n-d; i<n; i++){
       arr3[n-1-i] = arr[i];
   }
    for(int i=0; i<n-d; i++){
        cout << arr2[i] << " ";
    }
    for(int i=0; i<d; i++){
        cout << arr3[i] << " ";
    }
   return 0;
}