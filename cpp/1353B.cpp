#include "/Users/na/stdc++.h"
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >>k;
        int arr1[n], arr2[n];
        for(int i=0; i<n; i++){
            cin >> arr1[i];
        }
        for(int i= 0; i<n; i++){
            cin >> arr2[i];
        }
        while(k--){
                sort(arr1, arr1 + n);
                sort(arr2, arr2 + n);
                if(arr1[0]<arr2[n-1]){
                    int temp = arr1[0];
                    arr1[0] = arr2[n-1];
                    arr2[n-1] = temp;
                }
                else{
                    break;
                }
            }
        cout << accumulate(arr1, arr1 + n,0) << endl;
    }
   return 0;
}