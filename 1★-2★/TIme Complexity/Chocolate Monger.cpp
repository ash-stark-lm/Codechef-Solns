// https://www.codechef.com/practice/course/1to2stars/LP1TO205/problems/CM164364
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
    int n, x;
    cin >> n >> x;
    vi(n);

    unordered_set<int> s;
    for (auto &it : v)
      s.insert(it);
    int cnt = s.size();

    if (n - cnt >= x)
      cout << cnt << endl;
    else
      cout << n - x << endl;
  }
  return 0;
}
