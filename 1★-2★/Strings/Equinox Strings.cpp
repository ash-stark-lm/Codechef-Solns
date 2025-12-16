// https://www.codechef.com/practice/course/1to2stars/LP1TO203/problems/EQUINOX
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
    int n, a, b;
    cin >> n >> a >> b;
    int pt_a = 0;
    int pt_b = 0;
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      if (s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' ||
          s[0] == 'N' || s[0] == 'O' || s[0] == 'X') {
        pt_a += a;
      } else
        pt_b += b;
    }

    if (pt_a > pt_b)
      cout << "SARTHAK" << endl;
    else if (pt_a < pt_b)
      cout << "ANURADHA" << endl;
    else
      cout << "DRAW" << endl;
  }

  return 0;
}