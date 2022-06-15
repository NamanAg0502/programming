#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   
   int n;
   cin >> n;
   string arr[n];
   for(int i=0; i < n; i++){
       cin >> arr[i];
   }
   for(int i=0; i < n; i++){
       if(arr[i].length() == 1){
           cout << "BOB " << arr[i] << endl;
       }
   }
   return 0;
}