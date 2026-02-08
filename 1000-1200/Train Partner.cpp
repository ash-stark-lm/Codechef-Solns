// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ANKTRAIN
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
    int n;
    cin >> n;
    int a = n % 8;
    if (a == 1) {
      cout << n + 3 << "LB" << endl;
    } else if (a == 2) {
      cout << n + 3 << "MB" << endl;
    } else if (a == 3) {
      cout << n + 3 << "UB" << endl;
    } else if (a == 4) {
      cout << n - 3 << "LB" << endl;
    } else if (a == 5) {
      cout << n - 3 << "MB" << endl;
    } else if (a == 6) {
      cout << n - 3 << "UB" << endl;
    } else if (a == 7) {
      cout << n + 1 << "SU" << endl;
    } else {
      cout << n - 1 << "SL" << endl;
    }
  }
  return 0;
}