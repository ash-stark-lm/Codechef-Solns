// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/TALAZY
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
    int n, b, m;
    cin >> n >> b >> m;

    int problems = n;
    int curr_m = m;
    int time = 0;
    while (problems > 1) {
      int half = (problems + 1) / 2;
      problems -= half;
      time += half * curr_m + b;
      curr_m *= 2;
    }

    time += curr_m;
    cout << time << endl;
  }

  return 0;
}