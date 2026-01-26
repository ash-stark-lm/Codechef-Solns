// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/STICKBREAK?tab=statement
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

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {
    int l, k;
    cin >> l >> k;
    if (l % k == 0) {
      cout << 0 << endl;
    } else {
      // int x = l / k;
      // int r = l % k;
      // r parts length => x+1 => sum=r and k-r parths length=> x=> x*(k-r)
      cout << 1 << endl;
    }
  }
  return 0;
}