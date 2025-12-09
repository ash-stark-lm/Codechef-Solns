// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ELECTIONS
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
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    if (x1 > 50)
      cout << "A" << endl;
    else if (x2 > 50)
      cout << "B" << endl;
    else if (x3 > 50)
      cout << "C" << endl;
    else
      cout << "NOTA" << endl;
  }

  return 0;
}