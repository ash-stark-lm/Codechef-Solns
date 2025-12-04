// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFAPPS
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
    int s, x, y, z;
    cin >> s >> x >> y >> z;
    int rem = s - (x + y);
    if (rem >= z)
      cout << 0 << endl;
    else if (rem + y >= z || rem + x >= z)
      cout << 1 << endl;
    else
      cout << 2 << endl;
  }

  return 0;
}