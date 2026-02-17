
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
    // odd+odd=even & even+even=odd
    int x, y;
    cin >> x >> y;

    // ans => (#even in X × #even in Y) + (#odd in X × #odd in Y)

    int cnt_odd_first = x / 2;
    int cnt_even_first = (x + 1) / 2;
    int cnt_odd_second = y / 2;
    int cnt_even_second = (y + 1) / 2;

    cout << cnt_even_first * cnt_even_second + cnt_odd_first * cnt_odd_second
         << endl;
  }

  return 0;
}