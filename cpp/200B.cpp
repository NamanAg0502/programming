#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   
   int n;
   float a;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++){
       cin >> arr[i];
   }
   a= accumulate(arr, arr + n, 0);
   cout << a/n << endl;
   return 0;
}