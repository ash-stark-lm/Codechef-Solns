// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPEEDTEST
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
    int a, x, b, y;
    cin >> a >> x >> b >> y;
    // To avoid floating point issues, we are gonna use cross multiply
    //  a/x > b/y => alice==> a*y>b*x;

    if (a * y > b * x) {
      cout << "Alice" << endl;
    } else if (a * y < b * x) {
      cout << "Bob" << endl;
    } else {
      cout << "Equal" << endl;
    }
  }

  return 0;
}