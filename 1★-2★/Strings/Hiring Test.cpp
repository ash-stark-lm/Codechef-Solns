// https://www.codechef.com/practice/course/1to2stars/LP1TO203/problems/HIRETEST
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
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    string res = "";
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      // X problem solved or X-1 solved and Y partially solved then passed

      int cnt_solved = 0;
      int cnt_partial = 0;
      for (auto &c : s) {
        if (c == 'F')
          cnt_solved++;
        else if (c == 'P')
          cnt_partial++;
      }
      if (cnt_solved >= x || (cnt_solved == x - 1 && cnt_partial >= y))
        res += "1";
      else
        res += "0";
    }
    cout << res << endl;
  }

  return 0;
}