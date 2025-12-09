// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/CARCHOICE

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

    int c1 = c * b;
    int c2 = d * a;
    if (c1 < c2)
      cout << -1 << endl;
    else if (c1 > c2)
      cout << 1 << endl;
    else
      cout << 0 << endl;
  }
  return 0;
}