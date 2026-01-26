// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/RECTANGL
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    unordered_map<int, int> mp;

    mp[a]++;
    mp[b]++;
    mp[c]++;
    mp[d]++;

    bool ans = true;
    for (auto it : mp) {
      if (it.second % 2 != 0) {
        ans = false;
        break;
      }
    }
    cout << (ans ? "YES\n" : "NO\n");
  }
  return 0;
}