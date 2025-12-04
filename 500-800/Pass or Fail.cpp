// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PASSORFAIL
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
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  testcases {
    int n, x, p;
    cin >> n >> x >> p;
    int total_marks = (x * 3) - (n - x);
    if (total_marks >= p)
      cout << "PASS" << endl;
    else
      cout << "FAIL" << endl;
  }
  return 0;
}