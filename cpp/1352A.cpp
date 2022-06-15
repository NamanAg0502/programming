#include "/Users/na/stdc++.h"
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        int p = 1;
		while (n > 0) {
			if (n % 10 > 0) {
				v.push_back((n % 10) * p);
			}
			n /= 10;
			p *= 10;
		}
		cout << v.size() << endl;
		for(int i = v.size() -1; i > -1; i--){
            cout << v[i] << " ";
        }
		cout << endl;
    }
   return 0;
}