#include "/Users/na/stdc++.h"
using namespace std;

int main()
{
    int arr[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int lights[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> lights[i][j];
            if (lights[i][j] % 2 == 0)
            {
                arr[i][j] &= 1;
            }
            else if (lights[i][j] % 2 == 1)
            {
                arr[i][j] &= 0;
                if (j < 3 && i < 3)
                {
                    arr[i][j + 1] &= 0;
                    arr[i + 1][j] &= 0;
                }
                else if (i < 3 && j > 0)
                {
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}