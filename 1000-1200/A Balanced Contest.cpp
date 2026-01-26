// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PERFCONT
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
    int n, p;
    cin >> n >> p;
    vi(n);

    int cnt_easy = 0;
    int cnt_hard = 0;
    fo(i, n) {
      if (v[i] >= (p / 2))
        cnt_easy++;
      else if (v[i] <= (p / 10))
        cnt_hard++;
    }

    if (cnt_easy == 1 && cnt_hard == 2)
      YES;
    else
      NO;
  }
  return 0;
}