// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ANUUND
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

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {
    int n;
    cin >> n;
    vi(n);
    sortinc(v);
    vector<int> ans(n);
    bool even = true;
    int i = 0, j = n - 1, k = 0;
    while (i <= j) {
      if (even) {
        ans[k] = v[i];
        i++;
      } else {
        ans[k] = v[j];
        j--;
      }
      k++;
      even = !even;
    }

    fo(i, n) cout << ans[i] << " ";
    cout << endl;
  }

  return 0;
}