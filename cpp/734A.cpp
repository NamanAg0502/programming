#include "/Users/na/stdc++.h"
using namespace std;

int main(){
    int n, a = 0, b = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A'){
            a++;
        }
        if(s[i] == 'D'){
            b++;
        }
    }
    if(a > b){
        cout << "Anton";
    }
    else if(a < b){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }
   
   return 0;
}