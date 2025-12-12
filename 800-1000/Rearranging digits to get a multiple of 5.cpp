// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/DIGARR
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
    int d;
    cin >> d;
    string s;
    cin >> s;

    bool ans = false;
    for (int i = 0; i < d; i++) {
      if (s[i] == '0' || s[i] == '5') {
        ans = true;
        break;
      }
    }
    if (ans)
      YES;
    else
      NO;
  }

  return 0;
}