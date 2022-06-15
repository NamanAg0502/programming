#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   
   int n,count =0;
   cin >> n;
   while(n--){
       int a,b;
       cin >> a >> b;
	
	    if(a%b==0) 
	    {
	        cout<<0<<endl;
	    }
	    else {
	        int c=a%b;
	        cout<<b-c<<endl;
	    }
   }
   return 0;
}