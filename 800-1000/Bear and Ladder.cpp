// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/BRLADDER
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
    int a, b;
    cin >> a >> b;

    int x = min(a, b), y = max(a, b);

    bool ans = false;

    // Type-1: roads 1-2, 3-4, 5-6, ...
    if (y - x == 1 && x % 2 == 1)
      ans = true;

    // Type-2: odd chain 1-3, 3-5, 5-7, ...
    else if (x % 2 == 1 && y % 2 == 1 && y - x == 2)
      ans = true;

    // Type-3: even chain 2-4, 4-6, 6-8, ...
    else if (x % 2 == 0 && y % 2 == 0 && y - x == 2)
      ans = true;

    cout << (ans ? "YES" : "NO") << endl;
  }

  return 0;
}