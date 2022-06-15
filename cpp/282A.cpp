#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n;
   cin >> n;
   int count = 0;
   string arr[n];
   for (int i = 0; i < n; i++){
       cin >> arr[i];
       if(arr[i] == "++X" || arr[i] == "X++"){
           count += 1;
       }
       else{
           count -= 1;
       }
   }
   cout << count << endl;
   return 0;
}