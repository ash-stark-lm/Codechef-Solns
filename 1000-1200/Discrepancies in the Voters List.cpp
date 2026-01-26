// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/VOTERS
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

  int a, b, c;
  cin >> a >> b >> c;
  int total = a + b + c;
  unordered_map<int, int> mp;
  for (int i = 1; i <= total; i++) {
    int x;
    cin >> x;
    mp[x]++;
  }

  vector<int> res;
  for (auto &it : mp) {
    if (it.second > 1) {
      res.pb(it.first);
    }
  }
  sortinc(res);
  cout << res.size() << endl;
  for (auto &it : res) {
    cout << it << endl;
  }

  return 0;
}