// https://www.codechef.com/practice/course/1to2stars/LP1TO205/problems/SIMPSTAT
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
    int n, k;
    cin >> n >> k;
    vi(n);
    sortinc(v);

    int sum = 0;
    for (int i = k; i < n - k; i++) {
      sum += v[i];
    }

    double ans = double(sum / (double)(n - 2 * k));
    cout << fixed << setprecision(6) << ans << endl;
  }
  return 0;
}
