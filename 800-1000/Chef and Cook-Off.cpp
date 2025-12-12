// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/CCOOK
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

    vi(5);
    int cnt = 0;
    fo(i, 5) {
      if (v[i] == 1)
        cnt++;
    }

    if (cnt == 5)
      cout << "Jeff Dean" << endl;
    else if (cnt == 4)
      cout << "Hacker" << endl;
    else if (cnt == 3)
      cout << "Senior Developer" << endl;
    else if (cnt == 2)
      cout << "Middle Developer" << endl;
    else if (cnt == 1)
      cout << "Junior Developer" << endl;
    else
      cout << "Beginner" << endl;
  }

  return 0;
}