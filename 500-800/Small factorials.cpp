// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FCTRL2?tab=statement

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

    vector<int> digits(1, 1);

    for (int i = 2; i <= n; i++) {
      int carry = 0;
      for (size_t j = 0; j < digits.size(); j++) {
        int prod = digits[j] * i + carry;
        digits[j] = prod % 10;
        carry = prod / 10;
      }
      while (carry > 0) {
        digits.push_back(carry % 10);
        carry /= 10;
      }
    }

    for (int i = digits.size() - 1; i >= 0; i--)
      cout << digits[i];
    cout << "\n";
  }

  return 0;
}