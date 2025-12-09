// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/AREAPERI
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

  int l, b;
  cin >> l >> b;

  int area = l * b;
  int perimeter = 2 * (l + b);
  if (area > perimeter) {
    cout << "Area" << endl;
  }

  else if (area < perimeter) {
    cout << "Peri" << endl;
  } else {
    cout << "Eq" << endl;
  }
  cout << max(area, perimeter) << endl;

  return 0;
}