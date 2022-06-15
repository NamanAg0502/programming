// #include "/Users/na/stdc++.h"
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n], temp[n];
//     for(int i=0 ; i<n ; i++){
//         cin >> arr[i];
//         temp[n-i-1] = arr[i];
//     }
//     for(int i=0 ; i<n ; i++){
//         cout << temp[i] << " ";
//     }


//    return 0;
// }
#include<iostream>
using namespace std;
int main()
 {
	int t,n;
	cin >> t >> n;
	long long int arr[n];
	for(int i = 0; i < n; i++){
	    cin >> arr[i];
	}
	for(int i = n-1; i > -1 ; i--){
	    cout << arr[i] << " ";
	}
	return 0;
}