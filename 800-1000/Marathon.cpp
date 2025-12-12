// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/MARARUN
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
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int mx = a * b;
    if (mx >= 42)
      cout << e << endl;
    else if (mx >= 21)
      cout << d << endl;
    else if (mx >= 10)
      cout << c << endl;
    else
      cout << 0 << endl;
  }

  return 0;
}