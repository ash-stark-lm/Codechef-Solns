// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/BUY1GET1
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
    string s;
    cin >> s;

    unordered_map<char, int> mp;
    for (auto &c : s)
      mp[c]++;
    // Buy 1 get 1
    int ans = 0;
    for (auto &it : mp) {
      int cost = (it.second + 1) / 2;
      ans += cost;
    }
    cout << ans << endl;
  }
  return 0;
}