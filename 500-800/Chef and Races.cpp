// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFRACES
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
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  testcases {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    // easy way use set;
    set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(x);
    s.insert(y);
    if (s.size() == 2)
      cout << 0 << endl;
    if (s.size() == 3)
      cout << 1 << endl;
    if (s.size() == 4)
      cout << 2 << endl;
  }
  return 0;
}