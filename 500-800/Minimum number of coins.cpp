// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINCOINS
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
    int n;
    cin >> n;
    if (n % 5 != 0) {
      cout << -1 << endl;
      continue;
    }

    int ans = (n % 10 == 0) ? (n / 10) : ((n / 10) + 1);
    cout << ans << endl;
  }

  return 0;
}