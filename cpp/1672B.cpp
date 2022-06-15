#include "/Users/na/stdc++.h"
using namespace std;

int main(){

   int n;
   cin >> n;
   while(n--){
       string str;
       int k;
       cin >> str;
       int b= str.find('B');
       while(str.length() >= 2){
           str = str.erase(0,b+1);
           cout << str << endl;
       }
       if(str.length() == 0){
           cout << "YES" << endl;
       }
       else{
           cout << "NO" << endl;
       }
   }

   return 0;
}