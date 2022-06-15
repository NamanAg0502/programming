#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   
   int n;
   cin >> n;
   int arr[n][2];
   for(int i=0; i<n; i++) {
       for(int j=0; j<2; j++) {
           cin >> arr[i][j];
       }
   }
   int k =0; int a = 0;
   for(int i=0; i<n; i++) {
       k = max(k, a);
       a -= arr[i][0];
       a += arr[i][1];
   }
   cout << k << endl;
   return 0;
}