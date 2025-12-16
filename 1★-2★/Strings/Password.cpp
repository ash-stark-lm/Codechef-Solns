// https://www.codechef.com/practice/course/1to2stars/LP1TO203/problems/PASSWD
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
    vector<bool> conditions(5, 0);
    // index  0 ->atleast one small letter and so on
    unordered_set<char> st = {'@', '#', '&', '%', '?'};

    for (size_t i = 0; i < s.length(); i++) {
      if (s[i] >= 'a' && s[i] <= 'z')
        conditions[0] = true;
      else if (s[i] >= 'A' && s[i] <= 'Z' && i > 0 && i < s.length() - 1)
        conditions[1] = true;
      else if (s[i] >= '0' && s[i] <= '9' && i > 0 && i < s.length() - 1)
        conditions[2] = true;
      else if (st.find(s[i]) != st.end() && i > 0 && i < s.length() - 1)
        conditions[3] = true;
    }

    if (s.length() >= 10)
      conditions[4] = true;
    bool ans = true;
    for (int i = 0; i < 5; i++) {
      if (conditions[i] == false) {
        ans = false;
        break;
      }
    }

    if (ans)
      cout << "YES" << endl;
    else {
      cout << "NO" << endl;
    }
  }

  return 0;
}