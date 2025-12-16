// https://www.codechef.com/practice/course/1to2stars/LP1TO203/problems/LAPIN
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

    vector<int> f(26, 0);
    // odd length e.g 3==> high 1 ignore the middle
    int mid = s.length() / 2;

    for (int i = 0; i < mid; i++) {
      f[s[i] - 'a']++;
    }
    if (s.length() % 2 != 0)
      mid++;

    for (size_t i = mid; i < s.length(); i++) {
      f[s[i] - 'a']--;
    }

    bool ans = true;
    for (int i = 0; i < 26; i++) {
      if (f[i] > 0) {
        ans = false;
        break;
      }
    }
    cout << (ans ? "YES" : "NO") << endl;
  }

  return 0;
}