// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ENDSORTED
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
    int pos_1 = -1, pos_n = -1;
    for (int i = 0; i < n; i++) {
      if (v[i] == 1) {
        pos_1 = i;
      }
      if (v[i] == n) {
        pos_n = i;
      }
    }
    int cost1 = pos_1;
    int cost2 = n - pos_n - 1;

    if (pos_1 < pos_n) {
      cout << cost1 + cost2 << endl;
    } else
      cout << cost1 + cost2 - 1 << endl;
  }
  return 0;
}