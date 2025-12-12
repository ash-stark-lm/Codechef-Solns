// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/JMARKET
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
    int x, a, b, c;
    cin >> x >> a >> b >> c;

    int mini = min({a, b, c});

    int s = a + b + c - mini - max({a, b, c});

    cout << mini * (x - 1) + s << endl;
  }

  return 0;
}