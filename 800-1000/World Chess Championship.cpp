
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
    int x;
    cin >> x;

    string s;
    cin >> s;
    int carlsen = 0, chef = 0;
    for (auto &i : s) {
      if (i == 'C')
        carlsen += 2;
      else if (i == 'N')
        chef += 2;
      else {
        carlsen++;
        chef++;
      }
    }
    if (carlsen > chef)
      cout << 60 * x << endl;
    else if (chef > carlsen)
      cout << 40 * x << endl;
    else
      cout << 55 * x << endl;
  }

  return 0;
}