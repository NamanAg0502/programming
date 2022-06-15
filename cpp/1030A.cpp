#include "/Users/na/stdc++.h"
using namespace std;

int main(){
    int n, count=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == 1){
            count++;
        }
    }
    if(count > 0){
        cout << "HARD" << endl;
    }
    else{
        cout << "EASY" << endl;
    }
   
   return 0;
}