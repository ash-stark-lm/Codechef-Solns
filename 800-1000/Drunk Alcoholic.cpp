// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/DRUNKALK
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
    int k;
    cin >> k;
    int pairs = k / 2;
    int rem = k % 2;

    int ans = pairs * 2;
    if (rem == 1)
      ans += 3;

    cout << ans << endl;
  }
  return 0;
}