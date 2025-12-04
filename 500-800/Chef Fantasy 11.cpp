// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FIZZBUZZ2303
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

int fact(int a) {
  int ans = 1;
  for (int i = 1; i <= a; i++) {
    ans *= i;
  }
  return ans;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  testcases {
    int n;
    cin >> n;
    // np2-> n!/(n-2)!
    int ans = fact(n) / (fact(n - 2));

    cout << ans << endl;
  }
  return 0;
}