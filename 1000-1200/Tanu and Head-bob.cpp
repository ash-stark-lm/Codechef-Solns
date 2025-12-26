// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/HEADBOB
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

    int cnt_i = 0, cnt_n = 0, cnt_y = 0;

    for (int i = 0; i < n; i++) {
      if (s[i] == 'I')
        cnt_i++;
      if (s[i] == 'N')
        cnt_n++;
      if (s[i] == 'Y')
        cnt_y++;
    }
    if (cnt_i > 0)
      cout << "INDIAN" << endl;
    else if (cnt_y > 0)
      cout << "NOT INDIAN" << endl;
    else
      cout << "NOT SURE" << endl;
  }
  return 0;
}