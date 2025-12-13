// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/TWODISH
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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int dishes = min(a, b);
    b -= dishes;
    dishes += min(b, c);
    if (dishes >= n)
      YES;
    else
      NO;
  }

  return 0;
}