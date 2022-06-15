#include "/Users/na/stdc++.h"
using namespace std;

int main()
{

    int a = 0, b = 0;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (int(str[i]) > 64 && int(str[i]) < 91)
        {
            a++;
        }
        else if (int(str[i]) > 96 && int(str[i]) < 123)
        {
            b++;
        }
    }
    if(b >= a){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    else{
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    cout << str;
    return 0;
}