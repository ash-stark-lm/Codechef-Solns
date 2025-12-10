// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/CCISLAND
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
    int p, q, r, s, d;
    cin >> p >> q >> r >> s >> d;

    int days_poss = min(p / r, q / s);
    if (days_poss >= d)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}