#include "/Users/na/stdc++.h"
using namespace std;

int main(){
   
   int n, k, a;
   cin >> n >> k;
   a = k - n + 1;  
   int arr[k];
   for(int i=0; i<k; i++){
       cin >> arr[i];
   }
   sort(arr, arr + k);
    int puzzle[a];
   for(int i=0; i<a; i++){
        puzzle[i] = (arr[i + n - 1] - arr[i]);
   }
   sort(puzzle, puzzle + a);
   cout << puzzle[0] << endl;
   return 0;
}