// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/MELTGOLD
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
    int x, y;
    cin >> x >> y;

    // i temp increase after i time
    int time = 0;
    int i = y;
    while (i < x) {
      time++;
      i += time;
    }
    cout << time << endl;
  }

  return 0;
}