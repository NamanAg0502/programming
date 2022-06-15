#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   
   int k, n, w, count ;
   cin >> k >> n >> w;

    count = (k*w*(w+1))/2;
    if(count > n){
        cout << (count - n) << endl;
    }
    else{
        cout << 0 << endl;
    }
   return 0;
}