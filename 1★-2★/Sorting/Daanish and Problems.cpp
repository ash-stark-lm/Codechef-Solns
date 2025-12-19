// https://www.codechef.com/practice/course/1to2stars/LP1TO204/problems/DIV03
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
#define sort(v) sort(v.begin(), v.end())

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {

    vector<int> v(10);
    inputarr(v, 10);

    int k;
    cin >> k;

    int ans = 0;
    for (int i = 9; i >= 0; i--) {
      if (k >= v[i]) {
        k -= v[i];
      } else {
        ans = i + 1;
        break;
      }
    }

    cout << ans << "\n";
  }
  return 0;
}
