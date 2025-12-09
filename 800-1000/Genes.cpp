// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/GENE01
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

  char a, b;
  cin >> a >> b;

  if (a == 'R' || b == 'R') {
    cout << "R";
  } else if (a == 'B' || b == 'B') {
    cout << "B";
  } else {
    cout << "G";
  }

  return 0;
}