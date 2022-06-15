#include "/Users/na/stdc++.h"
using namespace std;

//Incomplete Question

string removeOcc(string s, char c){
    for(int i = 0; i < s.length(); i++){
        if(s[i] == c){
            s.erase(s.begin() + i);
        }
    }
    return s;
}

int main(){
    int n;
    cin >>n;
    string arr[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin >> arr[i][j];
        }
    }

    
   
   return 0;
}