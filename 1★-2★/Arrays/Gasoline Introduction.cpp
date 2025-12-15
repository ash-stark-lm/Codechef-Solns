// codechef.com/practice/course/1to2stars/LP1TO202/problems/BEGGASOL
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

    int curr = v[0];
    int dist = v[0];
    for (int i = 1; i < n; i++) {
      curr -= 1;
      if (v[i] >= 0 && curr >= 0) {
        curr += v[i];
        dist += v[i];
      } else if (curr < 0)
        break;
    }
    cout << dist << endl;
  }
  return 0;
}