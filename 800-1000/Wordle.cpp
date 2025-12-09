// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/WORDLE
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
    string s, t;
    cin >> s >> t;

    string ans = "";
    for (size_t i = 0; i < s.length(); i++) {
      if (s[i] == t[i])
        ans += 'G';
      else
        ans += 'B';
    }
    cout << ans << endl;
  }

  return 0;
}