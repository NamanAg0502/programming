#include "/Users/na/stdc++.h"
using namespace std;

int binary_search(int arr[], int key, int n){   
    int s = 0;
    int e = n; 
    int a;
    if(n%2 == 0){
        a = (s+e)/2;
    }
    else{
        a = (s + e +1)/2;
    }
    while(s != e){
        if(a < arr[key]){
            s = a + 1; 
        }
        else if(a > arr[key]){
            e = a - 1;
        }
        else{
        cout << a ;
        }
    }
}
int main(){
   
   int n;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++){
       cin >> arr[i];
   }

   int count = binary_search(arr, 12, ))

   return 0;
}