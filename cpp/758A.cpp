#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n;
   cin >> n;
   vector<int> s;
   for(int i=0; i<n; i++){
       int x;
       cin >> x;
       s.push_back(x);
   }
   sort(s.begin(), s.end());
   int sum = 0;
   for(int i=0; i<s.size(); i++){
       sum += (s[n-1] - s[i]);
   }
   cout << sum << endl;
  
   return 0;
}