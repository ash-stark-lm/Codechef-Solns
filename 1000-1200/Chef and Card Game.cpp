// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CRDGAME
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

int sod(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {
    int n;
    cin >> n;
    int chef = 0, morty = 0;
    for (int i = 1; i <= n; i++) {
      int a, b;
      cin >> a >> b;
      int x = sod(a), y = sod(b);
      if (x > y)
        chef++;
      else if (x < y)
        morty++;
      else {
        chef++;
        morty++;
      }
    }
    if (chef > morty) {
      cout << 0 << " " << chef << endl;
    } else if (chef < morty) {
      cout << 1 << " " << morty << endl;
    } else {
      cout << 2 << " " << chef << endl;
    }
  }
  return 0;
}