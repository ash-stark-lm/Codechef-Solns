// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/REMOVEBAD
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
    int n;
    cin >> n;
    vi(n);
    unordered_map<int, int> mp;
    for (auto &x : v) {
      mp[x]++;
    }

    int mx_cnt = 0;
    for (auto &it : mp) {
      mx_cnt = max(mx_cnt, it.second);
    }
    cout << n - mx_cnt << endl;
  }

  return 0;
}