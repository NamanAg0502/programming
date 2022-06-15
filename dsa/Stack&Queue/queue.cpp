#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    queue<string> q;
    q.push("abc");
    q.push("bcd");
    q.push("def");
    q.push("efg");
    q.push("ghi");
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}