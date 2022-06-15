#include <iostream>
using namespace std;

int main(){
   int n, count = 1;
   cin >> n;
   char arr[n];
   for(int i=0; i<n; i++){
       cin >> arr[i];
       arr[i] = tolower(arr[i]);
   }
   if(n<26){
       cout << "NO";
   }
   else{
       sort(arr, arr + n);
       for(int i=1 ; i<n; i++){
           if(arr[i] != arr[i-1]){
               count++;
           }
       }
        if(count == 26){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
   }

   return 0;
}