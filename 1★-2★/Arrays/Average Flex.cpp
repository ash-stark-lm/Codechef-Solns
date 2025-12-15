// https://www.codechef.com/practice/course/1to2stars/LP1TO202/problems/AVGFLEX
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
    int n;
    cin >> n;
    vi(n);
    vector<int> l(n);
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
      int a = 0, b = 0;
      for (int j = 0; j < n; j++) {
        if (i == j)
          continue;
        if (v[j] <= v[i])
          a++;
        else
          b++;
      }
      l[i] = a;
      r[i] = b;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (l[i] >= r[i])
        ans++;
    }
    cout << ans << endl;
  }
  return 0;
}