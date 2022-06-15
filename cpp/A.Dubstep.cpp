#include "/Users/na/stdc++.h"
using namespace std;

int main() {
   int index;
   string my_str;
   cin >> my_str;
   string sub_str = " ";
   while((index = my_str.find("WUB")) != string::npos) {
      my_str.replace(index, 3, sub_str);
   }
   cout << my_str;
   return 0;
}