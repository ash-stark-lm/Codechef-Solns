// https://www.codechef.com/practice/course/1to2stars/LP1TO202/problems/COP
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
    int m, x, y;
    cin >> m >> x >> y;
    vi(m);

    vector<bool> safe(100, true);
    int val = x * y;
    fo(i, m) {
      int low = max(0LL, v[i] - val);
      int high = min(100LL, v[i] + val);
      for (int i = low; i <= high; i++) {
        safe[i] = false;
      }
    }
    int cnt = 0;
    for (int i = 1; i <= 100; i++) {
      if (safe[i])
        cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}