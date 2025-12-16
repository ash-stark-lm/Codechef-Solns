// https://www.codechef.com/practice/course/1to2stars/LP1TO203/problems/TWOSTR
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

    string a, b;
    cin >> a >> b;
    int n = a.length();

    int i = 0;
    bool possible = true;
    while (i < n) {
      if (a[i] == b[i])
        i++;

      else if (a[i] == '?' || b[i] == '?')
        i++;
      else {
        possible = false;
        break;
      }
    }
    if (possible)
      YES;
    else
      NO;
  }
  return 0;
}