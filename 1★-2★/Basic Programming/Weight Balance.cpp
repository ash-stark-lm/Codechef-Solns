// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/WEIGHTBL
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
    int w1, w2, x1, x2, m;
    cin >> w1 >> w2 >> x1 >> x2 >> m;
    int min_inc = m * x1;
    int mx_inc = m * x2;

    if (w2 - w1 >= min_inc && w2 - w1 <= mx_inc)
      cout << 1 << endl;

    else
      cout << 0 << endl;
  }

  return 0;
}