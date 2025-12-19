// https://www.codechef.com/practice/course/1to2stars/LP1TO204/problems/SIGNFLIP
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

    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (cnt == k)
        break;
      if (v[i] < 0) {
        v[i] *= -1;
        cnt++;
      }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
      if (v[i] < 0) {
        continue;
      }
      sum += v[i];
    }
    cout << sum << endl;
  }

  return 0;
}