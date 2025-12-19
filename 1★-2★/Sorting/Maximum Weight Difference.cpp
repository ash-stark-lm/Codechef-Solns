// https://www.codechef.com/practice/course/1to2stars/LP1TO204/problems/MAXDIFF
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
    int n, k;
    cin >> n >> k;
    vi(n);
    sort(v);
    int smaller_grp = min(k, n - k);
    int a = 0;
    fo(i, smaller_grp) { a += v[i]; }
    int total = accumulate(v.begin(), v.end(), 0LL);

    int r = total - a;
    cout << r - a << endl;
  }

  return 0;
}