
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

  testcases {

    vector<int> prices(26, 0);
    inputarr(prices, 26);
    string s;
    cin >> s;
    int n = s.length();
    vector<int> f(26, 0);
    for (int i = 0; i < n; i++) {
      f[s[i] - 'a']++;
    }
    int ans = 0;
    for (int i = 0; i < 26; i++) {
      if (f[i] == 0) {
        ans += prices[i];
      }
    }
    cout << ans << endl;
  }
  return 0;
}