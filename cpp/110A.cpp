#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int count = 0;
   string n;
   cin >> n;
   for(int i = 0; i < n.length(); i++){
       if(n[i] == '4' || n[i] == '7'){
           count++;
       }
       else{
           continue;
       }
   }
   if(count == 4 || count == 7 || count == 44 || count == 47 || count == 74 || count == 77 || count == 444 || count == 447 || count == 474 || count == 477 || count == 744 || count == 747 || count == 777){
       cout << "YES" << endl;
   }
   else{
       cout << "NO" << endl;
   }
   return 0;
}