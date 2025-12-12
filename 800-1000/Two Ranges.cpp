// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/TWORANGES
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    set<int> s;
    for (int i = a; i <= b; i++) {
      s.insert(i);
    }
    for (int i = c; i <= d; i++) {
      s.insert(i);
    }
    cout << s.size() << endl;

    /*
    Approach 2 -> mathematical
    int L = max(a, c);
    int R = min(b, d);
    int overlap = (L <= R ? R - L + 1 : 0);
    int ans = (b - a + 1) + (d - c + 1) - overlap;
    cout << ans << endl;

    */
  }

  return 0;
}