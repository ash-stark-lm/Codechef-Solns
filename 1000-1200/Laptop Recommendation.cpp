// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/LAPTOPREC
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
    int n;
    cin >> n;
    int freq[11] = {0};

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      freq[x]++;
    }

    int mx = 0;
    for (int i = 1; i <= 10; i++) {
      mx = max(mx, freq[i]);
    }

    int cnt = 0, ans = -1;
    for (int i = 1; i <= 10; i++) {
      if (freq[i] == mx) {
        cnt++;
        ans = i;
      }
    }

    if (cnt > 1)
      cout << "CONFUSED\n";
    else
      cout << ans << "\n";
  }

  return 0;
}