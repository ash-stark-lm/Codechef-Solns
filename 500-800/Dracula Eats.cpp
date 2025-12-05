// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEAT?tab=statement
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
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 0; i <= n - 2; i++) {
      if (i % 7 == 0) {
        cnt++;
      }
    }

    cout << cnt << endl;
  }
  return 0;
}