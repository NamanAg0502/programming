// #include "/Users/na/stdc++.h"
// using namespace std;

// int main(){
//    map<int, string> m;
//    m.insert({1, "hello"});
//    m.insert({5, "world"});
//    m.insert({3, "Hi"});
//    m.insert({8, "Naman"});
//    for(auto &it : m){
//        cout << it.first << " " << it.second << endl;
//    }
//    return 0;
// }


// Maps take O(log(n)) time complexity while insertion and output while UnorderedMaps take O(1) time complexity. 
// In UnorderedMaps we can't use data types such as pair, vector, sets because they use hash functions whic is not inbuilt for these data types
// While in Maps we can use all data types because it works on the basis of comparision of the keys. i.e. which is key is larger and which is smaller.


//  =================================================================
// Q. Given N strings print unique string in lexicographic order with their frequencies
// N < 10^5
// |S| <= 100
    

// Ans:-
#include "/Users/na/stdc++.h"
using namespace std;

int main(){
    map<string, int> m;
   int n;
   cin >> n;

    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        m[str]++;
    }
    for(auto &it : m){
        cout << it.first << " " << it.second << endl;
    }
   return 0;
}