// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EZSPEAK
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

    set<char> st = {'a', 'e', 'i', 'o', 'u'};

    int mx = 0;
    int cnt = 0;
    fo(i, n) {
      if (st.find(s[i]) == st.end()) {
        cnt++;
        mx = max(mx, cnt);
      } else {
        cnt = 0;
      }
    }

    if (mx >= 4)
      NO;
    else
      YES;
  }

  return 0;
}