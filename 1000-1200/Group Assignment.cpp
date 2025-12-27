// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/GRPASSN
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
    bool ans = true;
    for (auto &it : mp) {
      if (it.second % it.first != 0) {
        ans = false;
        break;
      }
    }
    if (ans)
      YES;
    else
      NO;
  }
  return 0;
}