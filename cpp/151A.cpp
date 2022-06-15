#include "/Users/na/stdc++.h"
using namespace std;

bool comp(int x, int y){
    return (x<y);
}

int main(){
   int n,k,l,c, d,p,nl,np;
   cin >> n >> k >> l >> c >> d >> p >> nl >> np;
   int toast = (l*k/nl);
   int limes = (c*d);
   int salt = (p/np);
   cout << min({toast, salt, limes}, comp)/n;
   return 0;
}