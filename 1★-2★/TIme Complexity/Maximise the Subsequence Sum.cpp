// https://www.codechef.com/practice/course/1to2stars/LP1TO205/problems/SIGNFLIP
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

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {

    int n, k;
    cin >> n >> k;
    vi(n);

    sortinc(v);

    int pos_sum = 0;

    for (int i = 0; i < n; i++) {
      if (v[i] > 0)
        pos_sum += v[i];

      else if (v[i] < 0 && k > 0) {
        k--;
        pos_sum += -v[i];
      }
    }
    cout << pos_sum << endl;
  }

  return 0;
}