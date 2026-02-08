// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ARRAYRET
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
    vector<int> b(n);
    inputarr(b, n);

    // b(i)= f(i)+g(i) -> given b(i) we need
    int sum_b = 0;
    for (auto &x : b) {
      sum_b += x;
    }

    int sum_a = sum_b / (n + 1);
    vector<int> a(n);
    fo(i, n) { a[i] = b[i] - sum_a; }
    for (auto &x : a) {
      cout << x << " ";
    }
    cout << endl;
  }

  return 0;
}