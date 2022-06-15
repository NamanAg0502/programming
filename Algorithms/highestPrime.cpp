#include "/Users/na/stdc++.h"
using namespace std;

const int N = 1e7 + 10;
vector<bool> isPrime(N, 1);
vector<int> hp(N, 0), lp(N, 0);

void primeOrNot(int N)
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
        if (isPrime[i] == true)
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
                hp[j] = i;
                if (lp[j] == 0)
                    lp[j] = i;
            }
}

int main()
{
    int n;
    cin >> n;
    primeOrNot(N);
    cout << isPrime[n] << '\n';
    return 0;
}