// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/FACEDIR
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

    int a = x % 4;
    if (a == 0)
      cout << "North" << endl;
    else if (a == 1)
      cout << "East" << endl;
    else if (a == 2)
      cout << "South" << endl;
    else
      cout << "West" << endl;
  }
  return 0;
}