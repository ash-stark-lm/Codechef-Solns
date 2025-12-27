// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/MSNSADM1
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
    vector<int> a(n), b(n);
    inputarr(a, n);
    inputarr(b, n);

    int mx = 0;
    for (int i = 0; i < n; i++) {
      int playerScore = a[i] * 20 - b[i] * 10;
      playerScore = max(0LL, playerScore);
      mx = max(mx, playerScore);
    }
    cout << mx << endl;
  }

  return 0;
}