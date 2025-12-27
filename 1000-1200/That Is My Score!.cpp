// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/WATSCORE
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
    int total = 0;
    vector<int> scores(8, 0);
    for (int i = 1; i <= n; i++) {
      int p, s;
      cin >> p >> s;
      if (p <= 8) {
        scores[p - 1] = max(scores[p - 1], s);
      }
    }
    for (auto &x : scores) {
      total += x;
    }
    cout << total << endl;
  }
  return 0;
}