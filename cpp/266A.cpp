#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   
   int n;
   cin >> n;
   char arr[n];
   int count = 0;
   for (int i = 0; i < n; i ++){
       cin >> arr[i];
   }
   for (int i = 1; i < n+1; i++){
       if(arr[i] == arr[i-1]){
           count++;
       }
       else{
           continue;
       }
   }
   cout << count << endl;
   return 0;
}