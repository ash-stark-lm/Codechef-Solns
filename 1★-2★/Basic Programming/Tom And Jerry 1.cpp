// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/TANDJ1
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
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;

    int dist = abs(d - b) + abs(c - a);

    // back and forth 2 steps. ==> dist is min steps to reach
    if (dist <= k && (k - dist) % 2 == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}