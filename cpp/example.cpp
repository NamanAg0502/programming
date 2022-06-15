#include "/Users/na/stdc++.h"
using namespace std;

int minSubArrayLen(int target, vector<int> &v)
{
   int n = v.size();
   vector<int> sum(n + 1);
   sum[0] = 0;
   for (int i = 0; i < n; i++)
   {
      sum[i + 1] = sum[i] + v[i];
   }
   int i = 0, j = 1;
   int minLen = INT_MAX;
   while (j < sum.size() && i < j)
   {
      if (sum[j] - sum[i] >= target)
      {
         minLen = min(minLen, j - i);
         i++;
      }
      else
      {
         j++;
      }
   }
   if (minLen == INT_MAX)
      return 0;
   return minLen;
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, k;
      cin >> n >> k;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
         cin >> v[i];
      cout << minSubArrayLen(k, v) << endl;
   }
   return 0;
}