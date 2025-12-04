
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
    int x, n;
    cin >> x >> n;
    // x is number of aircraft and n is passenger
    int curr_cap = x * 100;
    if (curr_cap >= n)
      cout << 0 << endl;
    else {
      int rem = n - x * 100;
      cout << (rem + 100 - 1) / 100 << endl;
    }
  }

  return 0;
}