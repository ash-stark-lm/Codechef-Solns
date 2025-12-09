// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/INCREAR
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
    int ops = 0;
    if (x < y) {
      ops = y - x;
    } else if (x > y) {
      if ((x - y) % 2 == 0) {
        ops = (x - y) / 2;
      } else {
        ops = (x - y) / 2 + 2;
      }
    }
    cout << ops << endl;
  }
  return 0;
}