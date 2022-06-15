#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n;
   cin >> n;
   string arr[n];
   for(int i=0; i<n; i++){
       if(i%2==0){
           arr[i] = "I hate";
       }
       else{
           arr[i] = "I love";
       }
   }
   for(int i=0; i<n-1; i++){
       cout << arr[i] << " " << "that" << " ";
   }
   cout << arr[n-1] << " " << "it";
   return 0;
}