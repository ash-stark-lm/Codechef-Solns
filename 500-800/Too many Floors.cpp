// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOORS
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

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    // floor i consist of room number from 10*(i-1) + 1 to 10*i
    // find floor for x and y
    int x_floor = (x + 10 - 1) / 10; // arithmetic ceiling
    int y_floor = (y + 10 - 1) / 10;
    cout << abs(x_floor - y_floor) << endl;
  }

  return 0;
}