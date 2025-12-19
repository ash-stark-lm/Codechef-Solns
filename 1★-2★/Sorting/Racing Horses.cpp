// https://www.codechef.com/practice/course/1to2stars/LP1TO204/problems/HORSES
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

  testcases {
    int n;
    cin >> n;
    vi(n);
    sort(v);
    int mini = INT_MAX;
    fo(i, n - 1) { mini = min(mini, v[i + 1] - v[i]); }
    cout << mini << endl;
  }

  return 0;
}