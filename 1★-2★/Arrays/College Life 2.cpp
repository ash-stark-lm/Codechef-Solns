// https://www.codechef.com/practice/course/1to2stars/LP1TO202/problems/COLGLF2
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
    int s;
    cin >> s;
    vector<int> q(s);
    inputarr(q, s);

    int total = 0;
    for (int i = 0; i < s; i++) {
      int e;
      cin >> e;
      vector<int> v(e);
      inputarr(v, e);

      int time = 0;
      for (int j = 0; j < e; j++) {
        if (j == 0)
          time += v[j];
        else
          time += v[j] - q[i];
      }

      total += time;
    }
    cout << total << endl;
  }
  return 0;
}