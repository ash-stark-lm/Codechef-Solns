// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1400/problems/LONGSEQ
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

int ans = 0;

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {

    string s;
    cin >> s;

    int cnt_1 = 0, cnt_0 = 0;
    for (auto &x : s)
      if (x == '0')
        cnt_0++;
      else
        cnt_1++;

    if (cnt_1 == 1 || cnt_0 == 1)
      YES;
    else
      NO;
  }
  return 0;
}