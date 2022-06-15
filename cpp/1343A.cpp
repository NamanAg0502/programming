#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
       int n;
       cin >> n;
       int arr[n];
       for(int i=0; i<n/2; i++){
           arr[i] = i*2+2;
       }
       for(int i=0; i<n/2; i++){
           arr[n/2 + i] = i*2 + 1;
       }
       int even = accumulate(arr, arr + n/2, 0);
       int odd = accumulate(arr + n/2, arr + n, 0);
       if(even > odd){
           if((even-odd)%2 == 0){
               arr[n-1] += (even-odd);
           }
       }
       even = accumulate(arr, arr + n/2, 0);
       odd = accumulate(arr + n/2, arr + n, 0);
       if(even == odd){
           cout << "YES" << endl;
           for(int i = 0; i <n; i++){
               cout << arr[i] << " ";
           }
           cout << endl;
       }
       else{
           cout << "NO" << endl;
       }
   }
   return 0;
}