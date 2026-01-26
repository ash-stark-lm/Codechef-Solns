// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEFNWRK
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
    int n, k;
    cin >> n >> k;

    vi(n);
    int trips = 0;
    int sum = 0;
    bool poss = true;
    for (int i = n - 1; i >= 0; i--) {
      if (v[i] > k) {
        poss = false;
        break;
      }

      if (sum + v[i] <= k) {
        sum += v[i];
      } else {
        trips++;
        sum = v[i];
      }
    }

    if (sum > 0)
      trips++;

    cout << (poss ? trips : -1) << "\n";
  }
  return 0;
}