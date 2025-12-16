// https://www.codechef.com/practice/course/1to2stars/LP1TO203/problems/ALPHABET
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

  string s;
  cin >> s;
  int n;
  cin >> n;
  vector<string> word(n);
  for (int i = 0; i < n; i++) {
    cin >> word[i];
  }
  unordered_set<char> st;
  for (auto &x : s)
    st.insert(x);

  for (int i = 0; i < n; i++) {
    bool possible = true;
    for (auto &x : word[i]) {
      if (st.find(x) == st.end()) {
        possible = false;
        break;
      }
    }

    if (possible) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}