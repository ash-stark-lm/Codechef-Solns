// https://www.codechef.com/practice/course/1to2stars/LP1TO205/problems/COOKMACH

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

#define sortinc(v) sort(v.begin(), v.end())
#define sortdec(v) sort(v.rbegin(), v.rend());

bool isPowerOfTwo(int x) {
  if (x <= 0)
    return false;
  while (x % 2 == 0)
    x /= 2;
  return x == 1;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;

    int ans = 0;

    // Step 1: reduce a until it becomes a power of 2
    while (!isPowerOfTwo(a)) {
      if (a % 2 == 0)
        a /= 2;
      else
        a = (a - 1) / 2;
      ans++;
    }

    // Step 2: now a and b are powers of 2 — just align
    while (a < b) {
      a *= 2;
      ans++;
    }
    while (a > b) {
      a /= 2;
      ans++;
    }
    cout << ans << endl;
  }

  return 0;
}