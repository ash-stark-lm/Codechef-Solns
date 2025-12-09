// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EVENTUAL
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (auto &c : s) {
      freq[c - 'a']++;
    }
    bool possible = true;
    for (auto &x : freq) {
      if (x & 1) {
        possible = false;
        break;
      }
    }
    cout << (possible ? "YES" : "NO") << endl;
  }

  return 0;
}