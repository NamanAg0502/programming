#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n;
   cin >> n;
   bool flag = 0;
   for(int i=2; i<sqrt(n); i++){
       if(n%i == 0){
           cout << "Non-Prime" << endl;
           flag = 1;
           break;
       }
   }
   if(!flag){
       cout << "Prime" << endl;
   }
   return 0;
}