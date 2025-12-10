// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/CHEFRUN
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
    int x1, x2, x3, v1, v2;
    cin >> x1 >> x2 >> x3 >> v1 >> v2;

    int d1 = abs(x3 - x1);
    int d2 = abs(x3 - x2);

    // v1/d1 > v2/d2
    if (v1 * d2 > v2 * d1)
      cout << "Chef" << endl;
    else if (v1 * d2 < v2 * d1)
      cout << "Kefa" << endl;
    else
      cout << "Draw" << endl;
  }
  return 0;
}