// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CONFLIP
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
    int g;
    cin >> g;

    for (int k = 1; k <= g; k++) {
      int i, n, q;
      cin >> i >> n >> q;

      // In end if a certain i is swapped odd times only then it si swapped
      int total_odd_pos = (n + 1) / 2;
      int rem = n - total_odd_pos;

      if (i != q) {
        cout << total_odd_pos << endl;
      } else
        cout << rem << endl;
    }
  }
  return 0;
}