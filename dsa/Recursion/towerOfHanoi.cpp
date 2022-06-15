#include "/Users/na/stdc++.h"
using namespace std;

void tower(int n, char src, char dst, char help)
{
    if (n == 0)
        return;

    tower(n - 1, src, help, dst);
    cout << "Move from " << src << " to " << dst << endl;
    tower(n - 1, help, dst, src);
}

int main()
{
    tower(2, 'A', 'C', 'B');
    return 0;
}