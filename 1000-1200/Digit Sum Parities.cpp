// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/DIGSMPAR
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

int digitSum(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

bool same_parity(int a, int b) {
  if ((a + b) % 2 == 0) {
    return true;
  }
  return false;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {
    int x;
    cin >> x;
    int a = digitSum(x);
    x++;
    int b = digitSum(x);

    while (same_parity(a, b)) {
      x++;

      b = digitSum(x);
    }
    cout << x << endl;
  }
  return 0;
}