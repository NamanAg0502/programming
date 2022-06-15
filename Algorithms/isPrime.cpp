#include "/Users/na/stdc++.h"
using namespace std;

const int N = 1e7 + 10;
vector<int> isPrime(N, 1);

void primeOrNot(int N)
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
        if (isPrime[i] == true)
            for (int j = 2 * i; j < N; j += i)
                isPrime[j] = false;
}

int main()
{
    int n;
    cin >> n;
    primeOrNot(N);
    cout << isPrime[n] << '\n';
    return 0;
}