// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BIN_BAT
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
    int n, a, b;
    cin >> n >> a >> b;

    int time = 0;
    int rounds = 0;

    while (n > 1) {

      rounds += 1;
      n /= 2;
      time += a;
      if (n == 1)
        break;
      time += b;
    }
    cout << time << endl;
  }

  return 0;
}