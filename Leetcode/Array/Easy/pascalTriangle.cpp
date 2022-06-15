#include "/Users/na/stdc++.h"
using namespace std;

// vector<vector<int>> generate(int numRows) {
//         for (int i = 0; i < numRows; i++) {

//         }
// }

int main(){
   int n, mid;
   cin >> n;
   int v[n][n];
   if(n%2==0) mid = n/2;
   else mid = (n+1)/2;
   for(int i = 0; i < n; i++){
       for(int j = 0; j <mid ; j++){
           v[i][j+mid] = 1;
           v[i][j-mid] = 1;
       } 
   }
   for(int i = 0; i < n; i++){
       for(int j = 0; j < n ; j++){
           cout << v[i][j] << " ";
       }
   }
   return 0;
}