// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1400/problems/HILLS
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
    int n, u, d;
    cin >> n >> u >> d;
    vi(n);

    int parachute = 1;
    int ind = 1;
    for (int i = 0; i < n - 1; i++) {

      int diff = v[i + 1] - v[i];

      if (diff == 0)
        ind++;
      else if (diff > 0 && diff <= u) {
        ind++;

      } else if (diff < 0 && abs(diff) <= d) {
        ind++;

      } else if (diff < 0 && abs(diff) > d && parachute == 1) {
        parachute--;
        ind++;
      } else
        break;
    }
    cout << ind << endl;
  }
  return 0;
}