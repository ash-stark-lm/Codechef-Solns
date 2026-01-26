
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

    vector<int> a(n);
    vector<int> b(n);
    inputarr(a, n);
    inputarr(b, n);

    int bestValue = -1;
    int bestRating = -1;
    int bestIndex = 0;

    for (int i = 0; i < n; i++) {
      int val = a[i] * b[i];
      if (val > bestValue || (val == bestValue && b[i] > bestRating)) {
        bestValue = val;
        bestRating = b[i];
        bestIndex = i + 1; // 1-based index
      }
    }

    cout << bestIndex << endl;
  }
  return 0;
}