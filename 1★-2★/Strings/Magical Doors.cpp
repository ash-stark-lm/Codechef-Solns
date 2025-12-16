// https://www.codechef.com/practice/course/1to2stars/LP1TO203/problems/MAGDOORS
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

    int l = s.length();
    int count = 0;
    if (s[0] == '0') {
      count = 1;
    }
    for (int i = 1; i < l; i++) {
      if (s[i] != s[i - 1]) {
        count++;
      }
    }
    cout << count << endl;
  }

  return 0;
}