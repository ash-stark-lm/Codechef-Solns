// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/BURGERS2
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
    int x, y, n, r;
    cin >> x >> y >> n >> r;

    int min_cost = n * x;
    if (min_cost > r) {
      cout << -1 << endl;
      continue;
    }

    int rem_coins = r - min_cost;
    int extra = y - x;

    int premium = min(n, rem_coins / extra);
    int normal = n - premium;

    cout << normal << " " << premium << "\n";
  }
  return 0;
}