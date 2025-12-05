// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DICEGAME2
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
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    int score_alice = a1 + a2 + a3 - min({a1, a2, a3});
    int score_bob = b1 + b2 + b3 - min({b1, b2, b3});
    if (score_alice > score_bob)
      cout << "Alice" << endl;
    else if (score_alice < score_bob)
      cout << "Bob" << endl;
    else
      cout << "Tie" << endl;
  }

  return 0;
}