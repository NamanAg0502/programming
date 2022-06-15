#include <iostream>
#include <string>

using namespace std;

int main()
{
    string t;
    cin >> t;

    int count = 1;
    for (size_t i = 1; i < t.length(); ++i)
    {
        if (t[i] == t[i - 1])
        {
            count += 1;
            if (count == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            count = 1;
        }
    }

    cout << "NO" << endl;
    return 0;
}