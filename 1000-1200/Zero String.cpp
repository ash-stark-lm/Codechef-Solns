// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ZEROSTRING
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt_zero = 0;
    for (size_t i = 0; i < s.length(); i++) {
      if (s[i] == '0')
        cnt_zero++;
    }
    int cnt_one = s.length() - cnt_zero;
    int steps = 0;
    if (cnt_one > cnt_zero) {
      steps += cnt_zero;
      steps++;
    } else
      steps += cnt_one;
    cout << steps << endl;
  }
  return 0;
}