// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/MILEAGE
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

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {
    int n, x, y, a, b;
    cin >> n >> x >> y >> a >> b;

    /*
    n*x/b=n*y/a => n*x*a = n*y*b=> x*a = y*b => any
    */
    int pc = x * b;
    int dc = y * a;

    if (pc > dc)
      cout << "DIESEL" << endl;
    else if (pc < dc)
      cout << "PETROL" << endl;
    else
      cout << "ANY" << endl;
  }

  return 0;
}