#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n, m, a;
   cin >> n >> m;
   a= min(n,m);
   if(a%2 == 0){
       cout << "Malvika";
   }
   else{
       cout << "Akshat";
   }
   return 0;
}