// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1400/problems/S02E10
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];
#define endl "\n"
#define pb push_back
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi(n)                                                                  \
  vector<int> v(n);                                                            \
  inputarr(v, n);
#define testcases                                                              \
  int t;                                                                       \
  cin >> t;                                                                    \
  while (t--)

#define sortinc(v) sort(v.begin(), v.end())
#define sortdec(v) sort(v.rbegin(), v.rend());

bool isPalindrome(string s) {
  int n = s.length();
  int i = 0, j = n - 1;
  while (i < j) {
    if (s[i] != s[j])
      return false;
    i++;
    j--;
  }
  return true;
}
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {
    int n, x, k;
    cin >> n >> x >> k;
    vector<int> a(n);
    vector<int> b(n);
    inputarr(a, n);
    inputarr(b, n);
    unordered_set<int> st;
    int cnt = 0;
    vector<int> d;
    for (int i = 0; i < n; i++) {
      int diff = abs(a[i] - b[i]);
      d.pb(diff);
    }
    for (auto &it : d) {
      if (it <= k)
        cnt++;
    }
    if (cnt >= x)
      YES;
    else
      NO;
  }

  return 0;
}