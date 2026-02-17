// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1400/problems/STUDVOTE
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
    int n, k;
    cin >> n >> k;
    vi(n);
    unordered_map<int, int> mp;
    unordered_set<int> st;
    for (int i = 0; i < n; i++) {
      if (v[i] == i + 1)
        st.insert(v[i]);
      else
        mp[v[i]]++;
    }

    int ans = 0;
    for (auto &it : mp) {
      if (it.second >= k && st.find(it.first) == st.end()) {
        ans++;
      }
    }
    cout << ans << endl;
  }

  return 0;
}