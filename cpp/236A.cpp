#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   
   string str;
   cin >> str;
   string str2 = "";
   for(int i = 0; i < str.length(); i++){
       if(str2.find(str[i]) == string::npos){
           str2.push_back(str[i]);
       }
   }
   if(str2.length()%2 == 0){
       cout << "CHAT WITH HER!"<< endl;
   }
   else{
       cout << "IGNORE HIM!" << endl;
   }
   return 0;
}