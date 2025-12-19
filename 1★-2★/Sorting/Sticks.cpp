//https://www.codechef.com/practice/course/1to2stars/LP1TO204/problems/STICKS
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

#define sortinc(v) sort(v.begin(), v.end())
#define sortdec(v) sort(v.rbegin(), v.rend());

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {
    int n;
    cin >> n;
    vi(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
      mp[v[i]]++;
    }
    vector<int> sides;

    for (auto &it : mp) {
      if (it.second >= 2) {
        sides.push_back(it.first);
        if (it.second >= 4)
          sides.push_back(it.first);
      }
    }

    sort(sides.rbegin(), sides.rend());

    if (sides.size() >= 2)
      cout << sides[0] * sides[1] << endl;
    else
      cout << -1 << endl;
  }

  return 0;
}
