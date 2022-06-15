#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n, m, a=0;
   cin >> n >> m;
   for(int i=0; i<n; i++){
       if(i%2 == 0){
           for(int j=0; j<m; j++){
               cout << "#";
           }
       }
       else{
           a++;
           for(int j=0; j<m; j++){
               if(a%2 == 1 && j == m-1){
                   cout << "#";
               }
               else if(a%2==0&&j==0){
					cout<<"#";
				}
				else {
					cout<<".";
				}
           }
       }
       cout<< endl;
   }
   return 0;
}