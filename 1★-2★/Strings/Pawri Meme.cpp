// https://www.codechef.com/practice/course/1to2stars/LP1TO203/problems/PAWRI
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
    for (size_t i = 0; i + 5 <= s.length(); i++) {

      if (s.compare(i, 5, "party") == 0) {

        s[i + 2] = 'w';
        s[i + 3] = 'r';
        s[i + 4] = 'i';
      }
    }
    cout << s << endl;
  }
  return 0;
}