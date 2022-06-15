#include "/Users/na/stdc++.h"
using namespace std;

bool prime(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            return false;;
        }
    }
    return true;
}
int main(){
   int n, mid;
   cin >> n;
   if(n%2 == 0){
       mid = n / 2;
   }
   else{
       mid = (n+1)/2;
   }
   vector<int> v1;
   for(int i=mid; i > 0; i--){
       if(!prime(i)){
           v1.push_back(i);
       }
   }
   cout << endl;
   vector<int> v2;
   for(int j=mid; j < n; j++){
       if(!prime(j)){
           v2.push_back(j);
       }
   }
   int a= 0, b = 0;
   for(auto it1: v1){
       for(auto it2: v2){
           if((it1 + it2) == n){
               a = it1;
               b = it2;
               break;
           }         
       }
       if(a+b == n){
           break;
       }
   }
   cout << a << " " << b << endl;
   return 0;
}