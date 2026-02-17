// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1400/problems/REPEAT
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
    int n, k, s;
    cin >> n >> k >> s;
    // sum of n  first odd numbers=n*n;
    int curr_sum = n * n;
    // remaining terms we can add is k-1;
    //(k-1)*x + curr_sum=s;
    int x = (s - curr_sum) / (k - 1);
    cout << x << endl;
  }
  return 0;
}