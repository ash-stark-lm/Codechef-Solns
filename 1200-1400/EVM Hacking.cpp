// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1400/problems/EVMHACK
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
    // A,B,C,P,Q,R.
    int a, b, c, p, q, r;
    cin >> a >> b >> c >> p >> q >> r;
    // chef party got a b c votes
    // total votes were p q r votes
    // to win a party should get more than half votes

    int total_votes = p + q + r;
    int chef = a + b + c;
    int mx_votes_taken = max({p - a, q - b, r - c});

    if (chef + mx_votes_taken > total_votes / 2) {
      YES;
    } else {
      NO;
    }
  }
  return 0;
}