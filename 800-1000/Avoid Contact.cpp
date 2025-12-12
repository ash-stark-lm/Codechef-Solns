// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/AVOIDCONTACT
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
    int x, y;
    cin >> x >> y;

    int r1 = y * 2 - 1;
    int r2 = x - y;
    if (r2)
      r2++;

    cout << r1 + r2 << endl;
  }
  return 0;
}