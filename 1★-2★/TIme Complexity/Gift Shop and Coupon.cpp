// https://www.codechef.com/practice/course/1to2stars/LP1TO205/problems/GFTSHP
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

#define sortinc(v) sort(v.begin(), v.end())
#define sortdec(v) sort(v.rbegin(), v.rend());

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {

    int n, k;
    cin >> n >> k;
    vi(n);
    sortinc(v);

    vector<int> p(n);
    p[0] = v[0];
    for (int i = 1; i < n; i++) {
      p[i] = p[i - 1] + v[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
      // if coupon used on the curr one
      int discount = (v[i] + 1) / 2;
      int total = p[i] - v[i] + discount;
      if (total <= k) {
        ans++;
      }
    }

    cout << ans << endl;
  }

  return 0;
}