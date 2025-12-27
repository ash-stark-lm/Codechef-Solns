// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/THREEFR
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
    int x, y, z;
    cin >> x >> y >> z;
    // x+y+z==0
    // we are given modular value of x,y,z

    int sum = x + y + z;
    if ((sum % 2 == 0) &&
        ((sum / 2 == x) || (sum / 2 == y) || (sum / 2 == z))) {
      YES;
    } else {
      NO;
    }
  }
  return 0;
}