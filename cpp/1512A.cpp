#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
       int n;
       cin >> n;
       int arr[n];
       unordered_map<int, int> m;
       for(int i=0; i<n; i++){
           int x;
           cin >> x;
           m[x]++;
           arr[i] = x;
       }
       int a= 0;
       for(auto it : m){
           if(it.second == 1){
               a = it.first;
           }
       }
       for(int i=0; i<n; i++){
           if(a == arr[i]){
               cout << i+1 << endl;
           }
       }
   }
   return 0;
}