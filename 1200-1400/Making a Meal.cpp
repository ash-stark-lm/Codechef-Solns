
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

bool isPresent(char c) {
  if (c == 'c' || c == 'o' || c == 'd' || c == 'h' || c == 'e' || c == 'f')
    return true;
  return false;
}
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {
    int n;
    cin >> n;
    int ans = INT_MAX;
    unordered_map<char, int> mp;
    mp['c'] = 0;
    mp['o'] = 0;
    mp['d'] = 0;
    mp['h'] = 0;
    mp['e'] = 0;
    mp['f'] = 0;
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;

      for (auto &c : s) {
        if (isPresent(c))
          mp[c]++;
      }
    }
    for (auto &x : mp) {
      if (x.first == 'c' || x.first == 'e') {
        x.second /= 2;
      }
    }
    for (auto &x : mp) {
      ans = min(ans, x.second);
    }
    if (ans == INT_MAX)
      ans = 0;
    cout << ans << endl;
  }
  return 0;
}