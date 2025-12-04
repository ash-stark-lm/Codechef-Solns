// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AORB
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
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  testcases {
    int x, y;
    cin >> x >> y;

    int way1 = (500 - 2 * x) + (1000 - 4 * (x + y));
    int way2 = (1000 - 4 * y) + (500 - 2 * (x + y));

    cout << max(way1, way2) << endl;
  }
  return 0;
}