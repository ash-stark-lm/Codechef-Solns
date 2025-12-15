// https://www.codechef.com/practice/course/1to2stars/LP1TO202/problems/NOBEL
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
    int n, m;
    cin >> n >> m;
    vi(n);
    unordered_set<int> s;

    for (auto &x : v) {
      s.insert(x);
    }
    if ((int)s.size() == m)
      NO;
    else
      YES;
  }
  return 0;
}