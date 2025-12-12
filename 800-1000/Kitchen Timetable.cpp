// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/KTTABLE
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

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    fo(i, n) cin >> a[i];
    fo(i, n) cin >> b[i];

    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (i == 0) {
        if (a[0] >= b[0])
          ans++;
      } else {
        if (a[i] - a[i - 1] >= b[i])
          ans++;
      }
    }
    cout << ans << endl;
  }

  return 0;
}