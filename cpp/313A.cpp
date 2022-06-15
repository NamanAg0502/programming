#include "/Users/na/stdc++.h"
using namespace std;

int main(){
    int n, a ,b;
    cin >> n;
    a = -(n%10);
    b = -((n/10)%10);
    if(n > 9) {
        cout << n;
    }
    else if(n < -10){ 
        if(a > b){
            cout << n/10;
        }
        else{
            cout << (((n/100)*10) - a);
        }
    }
    else{
        cout << 0; 
    }

    return 0;
}