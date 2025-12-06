// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/BREAKSTICK?tab=statement
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];
#define endl "\n"
#define pb push_back
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vi(n)                                                                  \
  vector<int> v(n);                                                            \
  inputarr(v, n);
#define testcases                                                              \
  int t;                                                                       \
  cin >> t;                                                                    \
  while (t--)

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {
    int n, x;
    cin >> n >> x;
    int rem = n - x;
    // x is odd always possible rem can be breaked to 1 1 1...
    if (x % 2 == 0) {
      if (rem % 2 == 0)
        YES;
      else
        NO;
    } else
      YES;
  }

  return 0;
}