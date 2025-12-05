// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/RECENTCONT
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
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  testcases {
    int n;
    cin >> n;
    int a = 0, b = 0;

    fo(i, n) {
      string s;
      cin >> s;

      if (s == "START38")
        a++;
      else
        b++;
    }
    cout << a << " " << b << endl;
  }

  return 0;
}