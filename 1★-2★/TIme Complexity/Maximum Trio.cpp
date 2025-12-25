// https://www.codechef.com/practice/course/1to2stars/LP1TO205/problems/MXMTRIO
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

    int n;
    cin >> n;
    vi(n);
    sortinc(v);
    int a = v[0];
    int b = v[n - 2];
    int c = v[n - 1];

    int ans = max(c * (b - a), b * (c - a));

    cout << ans << endl;
  }

  return 0;
}