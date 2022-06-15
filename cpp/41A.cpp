#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n, count = 0;
   string s, s1;
   cin >> s >> s1;
   n = s.length();
   for(int i=0; i<n; i++){
       if(s[i] == s1[n-i-1]){
           count++;
       }
   }
   if(n == count){
       cout << "YES" << endl;
   }
   else{
       cout << "NO" << endl;
   }
   return 0;
}