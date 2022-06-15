#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int count = 0;
   string s;
   getline(cin, s);
    sort(s.begin(), s.end());
   for(int i = 0; i < s.length(); i++){
       if(s[i] > 96 && s[i] < 123){
           if(s[i] != s[i+1]){
               count++;
           }
       }
   }
   if(s.length() <= 2){
       cout << 0 << endl;
   }
   else{
       cout << count << endl;
   }
   return 0;
}