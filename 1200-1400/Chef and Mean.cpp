// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1400/problems/CHFM
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];
#define endl "\n"
#define pb push_back
#define YES cout << "YES\n"
#define NO cout << "NO\n"
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
    int n;
    cin >> n;

    vi(n);
    int sum = accumulate(v.begin(), v.end(), 0LL);
    double avg = (double)(sum) / n;
    // we wanna check if we can remove some value and the mena si still same
    int ans = -1;
    for (int i = 0; i < n; i++) {
      int temp = sum;
      temp -= v[i];
      double avg2 = (double)temp / (n - 1);
      if (avg == avg2) {
        ans = i + 1;
        break;
      }
    }

    if (ans != -1)
      cout << ans << endl;
    else
      cout << "Impossible" << endl;
  }

  return 0;
}