// https://www.codechef.com/practice/course/1to2stars/LP1TO202/problems/BALLOON
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
    int n;
    cin >> n;
    vi(n);

    int cnt = 0;

    for (int i = 0; i < n; i++) {
      if (v[i] <= 7)
        cnt++;
      if (cnt == 7) {
        cout << i + 1 << endl;
        break;
      }
    }
  }
  return 0;
}