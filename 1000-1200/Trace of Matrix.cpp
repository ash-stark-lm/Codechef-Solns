// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/TRACE
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
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> mat[i][j];
      }
    }

    int mx = 0;
    for (int col = n - 1; col >= 0; col--) {
      int i = 0, j = col;
      int sum = 0;
      while (i < n && j < n) {
        sum += mat[i][j];
        i++;
        j++;
      }
      mx = max(sum, mx);
    }

    // start from left column (excluding first row)
    for (int row = 1; row < n; row++) {
      int i = row, j = 0;
      int sum = 0;
      while (i < n && j < n) {
        sum += mat[i][j];
        i++;
        j++;
      }
      mx = max(sum, mx);
    }
    cout << mx << endl;
  }

  return 0;
}