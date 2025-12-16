// https://www.codechef.com/practice/course/1to2stars/LP1TO203/problems/ERROR?tab=statement
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
    bool good = false;
    for (size_t i = 0; i + 3 <= s.length(); i++) {
      if (s.substr(i, 3) == "010" || s.substr(i, 3) == "101") {
        good = true;
        break;
      }
    }
    cout << (good ? "Good" : "Bad") << endl;
  }
  return 0;
}