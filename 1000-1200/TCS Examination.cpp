// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EXAMTIME
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
    int a, b, c;
    cin >> a >> b >> c;
    int d, e, f;
    cin >> d >> e >> f;

    tuple<int, int, int> dragon = {a + b + c, a, b};
    tuple<int, int, int> sloth = {d + e + f, d, e};

    if (dragon > sloth)
      cout << "DRAGON" << endl;
    else if (dragon < sloth)
      cout << "SLOTH" << endl;
    else
      cout << "TIE" << endl;
  }

  return 0;
}