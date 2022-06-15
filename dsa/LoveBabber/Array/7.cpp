#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   int n;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++){
       cin >> arr[i];
   }
   long long sum = 0, k = arr[0];
        for(int i=0;i<n;i++) 
            {
                sum+=arr[i];
                if(k<sum)
                    k=sum; 
                if(sum<0)
                    sum=0;
            }
            cout <<  k;

   return 0;
}