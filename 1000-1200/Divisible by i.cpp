// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/DIVBYI
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
    int N;
    cin >> N;
    int n = N / 2 + 1;
    int m = N / 2;
    for (int i = 0; i < N; i += 2) {
      cout << n << " ";
      if (i + 1 < N) {
        cout << m << " ";
      }
      n += 1;
      m -= 1;
    }
    cout << endl;
  }
  return 0;
}