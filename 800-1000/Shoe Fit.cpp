
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
    int a, b, c;
    cin >> a >> b >> c;

    bool zero = false;
    bool one = false;
    if (a == 0 || b == 0 || c == 0)
      zero = true;

    if (a == 1 || b == 1 || c == 1)
      one = true;
    if (zero & one)
      cout << 1 << endl;
    else
      cout << 0 << endl;
    /*
 Approach - 2
  int mini = min({a, b, c});
  int mx = max({a, b, c});
  if (mini == 0 && mx == 1)
    cout << 1 << endl;
  else
    cout << 0 << endl;
    */
  }

  return 0;
}