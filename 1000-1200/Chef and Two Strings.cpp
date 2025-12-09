// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/REMOVECARDS
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
    string s1, s2;
    cin >> s1 >> s2;

    int cnt1 = 0, cnt2 = 0;
    for (size_t i = 0; i < s1.length(); i++) {
      if (s1[i] != '?' && s2[i] != '?' && s1[i] != s2[i])
        cnt1++;
      else if (s1[i] == '?' || s2[i] == '?')
        cnt2++;
    }

    cout << cnt1 << " " << cnt1 + cnt2 << endl;
  }

  return 0;
}