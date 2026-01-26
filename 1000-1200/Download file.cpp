// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/DWNLD
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
    int free_left = k;
    int paid_data_used = 0;
    for (int i = 1; i <= n; i++) {
      int a, b;
      cin >> a >> b;

      int free_min = min(free_left, a);
      int paid_min = a - free_min;

      paid_data_used += paid_min * b;
      free_left -= free_min;
    }
    cout << paid_data_used << endl;
  }
  return 0;
}