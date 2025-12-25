// https://www.codechef.com/practice/course/1to2stars/LP1TO205/problems/MATCHES
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

  unordered_map<int, int> mp;
  mp[0] = 6;
  mp[1] = 2;
  mp[2] = 5;
  mp[3] = 5;
  mp[4] = 4;
  mp[5] = 5;
  mp[6] = 6;
  mp[7] = 3;
  mp[8] = 7;
  mp[9] = 6;

  testcases {
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    int ans = 0;
    while (sum > 0) {
      int ld = sum % 10;
      ans += mp[ld];
      sum /= 10;
    }
    cout << ans << endl;
  }

  return 0;
}
