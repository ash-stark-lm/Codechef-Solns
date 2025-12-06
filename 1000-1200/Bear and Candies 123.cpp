// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CANDY123
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
    int a, b;
    cin >> a >> b;

    int curr = 1;
    bool limakTurn = true;
    while (true) {
      if (limakTurn) {
        if (a < curr) {
          cout << "Bob\n";
          break;
        }
        a -= curr;
      } else {
        if (b < curr) {
          cout << "Limak\n";
          break;
        }
        b -= curr;
      }
      curr++;
      limakTurn = !limakTurn;
    }
  }

  return 0;
}