// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/RPD
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];
#define endl "\n"
#define pb push_back
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi(n)                                                                  \
  vector<int> v(n);                                                            \
  inputarr(v, n);
#define testcases                                                              \
  int t;                                                                       \
  cin >> t;                                                                    \
  while (t--)

#define sortinc(v) sort(v.begin(), v.end())
#define sortdec(v) sort(v.rbegin(), v.rend());

int sod(int n) {
  int res = 0;
  while (n > 0) {
    res += n % 10;
    n /= 10;
  }
  return res;
}
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {
    int n;
    cin >> n;
    vi(n);
    int ans = 0;

    for (int i = 0; i < n; i++) {
      int a = v[i];
      for (int j = i + 1; j < n; j++) {
        int b = v[j];
        int p = sod(a * b);
        ans = max(p, ans);
      }
    }
    cout << ans << endl;
  }
  return 0;
}