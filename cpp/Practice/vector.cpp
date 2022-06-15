#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   
   vector<int> v (3,4);

//    for(int i = 0; i < v.size(); i++){
//        cout << v[i] << endl;
//    }

//    vector<int>::iterator it;

//    for(it = v.begin(); it != v.end(); it++){
//        cout << *it << endl;
//    }

   for(auto element:v){
       cout << element << endl;
   }

   return 0;
}