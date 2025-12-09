// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/FLOW014
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
    int h;
    cin >> h;
    float c;
    cin >> c;
    int a;
    cin >> a;

    if (h > 50 && c < 0.7 && a > 5600) {
      cout << "10" << endl;
    } else if (h > 50 && c < 0.7) {
      cout << "9" << endl;
    } else if (c < 0.7 && a > 5600) {
      cout << "8" << endl;
    } else if (h > 50 && a > 5600) {
      cout << "7" << endl;
    } else if (h > 50 || c < 0.7 || a > 5600) {
      cout << "6" << endl;
    } else {
      cout << "5" << endl;
    }
  }

  return 0;
}