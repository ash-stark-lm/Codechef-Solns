// https://www.codechef.com/practice/course/1to2stars/LP1TO202/problems/IPCCERT
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

  int n, m, k;
  cin >> n >> m >> k;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    vi(k + 1);

    int time = 0;
    for (int i = 0; i < k; i++) {
      time += v[i];
    }
    int q = v[k]; // Q_i
    if (time >= m && q <= 10) {
      cnt++;
    }
  }
  cout << cnt << endl;

  return 0;
}