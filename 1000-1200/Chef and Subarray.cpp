
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];
#define endl "\n"
#define pb push_back
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi(n)                                                                  \
  vector<int> v(n);                                                            \
  inputarr(v, n);
#define testcases                                                              \
  int t;                                                                       \
  cin >> t;                                                                    \
  while (t--)

#define sortinc(v) sort(v.begin(), v.end())
#define sortdec(v) sort(v.rbegin(), v.rend());

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vi(n);

  int mx = 0;
  int cur = 0;

  for (int i = 0; i < n; i++) {
    if (v[i] != 0) {
      cur++; // extend streak
      mx = max(mx, cur);
    } else {
      cur = 0; // reset on zero
    }
  }
  // int l = 0, r = 0;

  // while (r < n) {
  //   if (v[r] != 0) {
  //     mx = max(mx, r - l + 1);
  //     r++;
  //   } else {
  //     r++;
  //     l = r;
  //   }
  // }
  cout << mx << endl;

  return 0;
}