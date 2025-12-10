// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/CHEFCONTEST
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
    int x, y, p, q;
    cin >> x >> y >> p >> q;
    int t1 = x + p * 10;
    int t2 = y + q * 10;

    if (t1 > t2)
      cout << "Chefina" << endl;
    else if (t1 < t2)
      cout << "Chef" << endl;
    else
      cout << "Draw" << endl;
  }
  return 0;
}