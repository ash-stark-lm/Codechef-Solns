// https://www.codechef.com/practice/course/1to2stars/LP1TO205/problems/PERMEXIS
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
    bool ans = true;
    for (int i = 1; i < n; i++) {
      if (v[i] - v[i - 1] > 1) {
        ans = false;
        break;
      }
    }

    if (ans)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
