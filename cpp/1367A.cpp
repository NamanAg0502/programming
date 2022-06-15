#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n;
   cin >> n;
   string arr[n];
   for(int i=0; i<n; i++){
       cin >> arr[i];
        string str;
        str = arr[i][0];
       for(int j=1; j<arr[i].length(); j=j+2){
           str += arr[i][j];
       }
       cout << str << endl;
   }
   return 0;
}