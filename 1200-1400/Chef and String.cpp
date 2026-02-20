// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1400/problems/RECNDSTR
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
    string s;
    cin >> s;

    int n = s.length();
    bool ans = true;
    if (n % 2 != 0) {
      // all char should be same
      for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) {

          ans = false;
          break;
        }
      }
    } else {
      // every char at odd place should be same and every even char
      // check at odd place
      for (int i = 0; i < n - 2; i++) {
        if (s[i] != s[i + 2]) {
          ans = false;
          break;
        }
      }
    }

    if (ans)
      YES;
    else
      NO;
  }

  return 0;
}