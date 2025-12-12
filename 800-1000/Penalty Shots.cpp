// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/PENALTY
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
    vi(10);
    int p1 = 0, p2 = 0;
    int i = 0, j = 1;
    while (i <= 10 && j <= 10) {
      if (v[i] == 1)
        p1++;
      if (v[j] == 1)
        p2++;
      i += 2;
      j += 2;
    }

    if (p1 > p2)
      cout << 1 << endl;
    else if (p1 < p2)
      cout << 2 << endl;
    else
      cout << 0 << endl;
  }

  return 0;
}