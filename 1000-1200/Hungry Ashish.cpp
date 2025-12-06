// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PIZZA_BURGER
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
    int x, y, z;
    cin >> x >> y >> z;

    if (x >= y)
      cout << "PIZZA" << endl;
    else if (x >= z)
      cout << "BURGER" << endl;
    else
      cout << "NOTHING" << endl;
  }

  return 0;
}