// https://www.codechef.com/practice/course/1to2stars/LP1TO202/problems/SUBTASK
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
    int n, m, k;
    cin >> n >> m >> k;
    vi(n);
    int cnt = 0;
    fo(i, n) {
      if (v[i] == 0)
        break;
      else
        cnt++;
    }
    if (cnt == n)
      cout << 100 << endl;
    else if (cnt >= m)
      cout << k << endl;
    else
      cout << 0 << endl;
  }
  return 0;
}