// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ABSTRING
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

#define sortinc(v) sort(v.begin(), v.end())
#define sortdec(v) sort(v.rbegin(), v.rend());

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {
    int n;
    cin >> n;
    string s;
    cin >> s;
    // basically we need to find if cnt of any char is odd
    vector<int> f(26, 0);
    for (auto &c : s) {
      f[c - 'a']++;
    }
    bool possible = true;
    for (int i = 0; i < 26; i++) {
      if (f[i] % 2 != 0) {
        possible = false;
        break;
      }
    }
    if (possible)
      YES;
    else
      NO;
  }

  return 0;
}