// https://www.codechef.com/practice/course/1to2stars/LP1TO204/problems/TACHSTCK
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
#define sort(v) sort(v.begin(), v.end())

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, d;
  cin >> n >> d;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    v[i] = a;
  }
  sort(v);

  int cnt = 0;
  int i = 0;
  while (i < n - 1) {
    if (v[i + 1] - v[i] <= d) {
      cnt++;
      i += 2;
    } else
      i++;
  }
  cout << cnt << endl;

  return 0;
}
