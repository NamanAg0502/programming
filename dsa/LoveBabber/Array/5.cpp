#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n,m;
   cin >> n >> m;
   int a[n], b[m];
   for(int i=0; i<n; i++){
       cin >> a[i];
   }
   for(int i=0; i<m; i++){
       cin >> b[i];
   }
   unordered_map<int, int> temp;
   for(int i=0; i<n; i++){
       temp[a[i]] = i;
   }
   for(int i=0; i<m; i++){
       temp[b[i]] = i;
   }
   return temp.size();
   return 0;
}