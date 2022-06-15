#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   string s1, s2, s3;
   cin >> s1 >> s2 >> s3;
   if(s3.length() < (s1.length()+ s2.length())){
       cout << "NO" << endl;
   } 
   else{
       for(int i = 0; i < s1.length(); i++){
           if(s3.find(s1[i]) != string::npos){
               s3.erase(s3.begin() + s3.find(s1[i]));
           }
       }
       for(int i = 0; i < s2.length(); i++){
           if(s3.find(s2[i]) != string::npos){
               s3.erase(s3.begin() + s3.find(s2[i]));
           }
       }
        if(s3.length() !=0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
   }
   return 0;
}