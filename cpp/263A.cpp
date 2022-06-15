#include "/Users/na/stdc++.h"
using namespace std;

int main(){
    int arr[5][5];
   for(int i=0; i<5; i++){
       for(int j=0; j<5; j++){
           cin >> arr[i][j];
       }
   }
int sum = 0;
   for(int i=0; i<5; i++){
       for(int j=0; j<5; j++){
           if(arr[i][j] == 1){
               if(j < 2 && i < 2){
                   sum += ((2-j) + (2-i));
               }
               else if(j < 2 && i >= 2){
                    sum += ((2-j) + (i-2));
               }
               else if(j >= 2 && i < 2){
                    sum += ((j-2) + (2-i));   
               }
               else{
                   sum += ((j-2) + (i-2));
               }
               break;
           }
           else{
               continue;
           }
       }
   }

   cout << sum;

   return 0;
}