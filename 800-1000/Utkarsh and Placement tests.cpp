// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/UTKPLC
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
    char a, b, c;
    cin >> a >> b >> c;
    char d, e;
    cin >> d >> e;

    unordered_map<char, int> mp = {{a, 1}, {b, 2}, {c, 3}};

    if (mp[d] > mp[e]) {
      cout << e << endl;
    } else {
      cout << d << endl;
    }
  }
  return 0;
}