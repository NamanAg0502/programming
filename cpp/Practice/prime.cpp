#include "/Users/na/stdc++.h"
using namespace std;

// Time complexity is O{sqrt(n)}

bool prime(int n){
    if(n==1) return false;
    for(int i=2; i*i<=n; i++)
        if(n%i==0) return false;
    return true;
}

int main(){
   int n;
   cin >> n;
   while(n--){
       int x;
       cin >> x;
       if(prime(x))
       cout << "YES" << endl;
       else
       cout << "NO" << endl;
   }
   return 0;
}