// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/COOK82A
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
    int barca = 0, eibar = 0, real = 0, malaga = 0;

    for (int i = 0; i < 4; i++) {
      string team;
      int goals;
      cin >> team >> goals;

      if (team == "Barcelona")
        barca = goals;
      else if (team == "Eibar")
        eibar = goals;
      else if (team == "RealMadrid")
        real = goals;
      else if (team == "Malaga")
        malaga = goals;
    }

    bool barcaWins = (barca > eibar);
    bool realLoses = (real < malaga);

    if (realLoses && barcaWins)
      cout << "Barcelona" << endl;

    else
      cout << "RealMadrid" << endl;
  }

  return 0;
}