// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/PLAYPIAN
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

    string s;
    cin >> s;
    size_t i = 0;
    bool ans = true;
    while (i < s.length()) {
      if (s[i] == s[i + 1]) {
        ans = false;
        break;
      }
      i += 2;
    }
    cout << (ans ? "YES" : "NO") << endl;
  }

  return 0;
}