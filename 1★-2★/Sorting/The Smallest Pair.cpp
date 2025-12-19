// https://www.codechef.com/practice/course/1to2stars/LP1TO204/problems/SMPAIR
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
#define sort(v) sort(v.begin(), v.end())

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {
    int n;
    cin >> n;
    vi(n);
    /* O(nlog(n))
    sort(v);
    cout << v[0] + v[1] << endl;
    */
    // O(n) solution wihout sorting
    int first_min = INT_MAX;
    int second_min = INT_MAX;
    fo(i, n) {
      if (v[i] < first_min) {
        second_min = first_min;
        first_min = v[i];
      } else if (v[i] < second_min) {
        second_min = v[i];
      }
    }
    cout << first_min + second_min << endl;
  }

  return 0;
}