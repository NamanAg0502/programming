#include "/Users/na/stdc++.h"
using namespace std;

// int main(){
//    int k;
//    cin >> k;
//    int n;
//    cin >> n;
//    int arr[n];
//    for(int i=0; i<n; i++){
//        cin >> arr[i];
//    }
//    sort(arr, arr + n);
//    int mid = (arr[n-1] + arr[0])/2;
//    for(int i=0; i<n; i++){
//        if(arr[i] <= mid){
//            arr[i] += k;
//        }
//        else{
//            arr[i] -= k;
//        }
//    }
//    sort(arr, arr + n);
//    cout << arr[n-1] - arr[0];
//    return 0;
// }

#include "/Users/na/stdc++.h"
using namespace std;

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        vector<pair<int, int>> v;
        vector<int> taken(n);

        // we will store all possible heights in a vector
        for (int i = 0; i < n; i++) {
            if (arr[i] - k >= 0) {
                v.push_back({arr[i] - k, i});
            }
            v.push_back({arr[i] + k, i});
        }
        sort(v.begin(), v.end());
        int elements_in_range = 0;
        int left = 0;
        int right = 0;

        // By two pointer we will traverse v and whenever we will get a range
        // in which all towers are included, we will update the answer.
        while (elements_in_range < n && right < v.size()) {
            if (taken[v[right].second] == 0) {
                elements_in_range++;
            }
            taken[v[right].second]++;
            right++;
        }
        int ans = v[right - 1].first - v[left].first;
        while (right < v.size()) {
            if (taken[v[left].second] == 1) {
                elements_in_range--;
            }
            taken[v[left].second]--;
            left++;

            while (elements_in_range < n && right < v.size()) {
                if (taken[v[right].second] == 0) {
                    elements_in_range++;
                }
                taken[v[right].second]++;
                right++;
            }

            if (elements_in_range == n) {
                ans = min(ans, v[right - 1].first - v[left].first);
            } else {
                break;
            }
        }
        return ans;
    }
};

int main(){
   int t;
   cin >> t;
   while (t--) {
       int n,k;
       cin >> k;
       cin >> n;
       int arr[n];
       for (int i = 0; i < n; i++) {
           cin >> arr[i];
       }
       Solution obj;
       auto ans = obj.getMinDiff(arr, n , k);
       cout << ans << endl;

   }
   return 0;
}
