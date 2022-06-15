#include "/Users/na/stdc++.h"
using namespace std;
vector<int> plusOne(vector<int>& a) {
        int n=a.size(), k, l = 1;
        for (int i=n-1; i>=0 && l !=0; i--){
            l += a[i];
            a[i] = l%10;
            l = l/10;
        }
        if( l != 0 ){
            a.emplace(a.begin(), 1);
        }
        cout << endl;
        return a;
    }

int main()
{
    vector <int> a = {9,9,9,9};
    for(int &x : plusOne(a))
        cout << x << " ";
    cout << '\n';
    
}