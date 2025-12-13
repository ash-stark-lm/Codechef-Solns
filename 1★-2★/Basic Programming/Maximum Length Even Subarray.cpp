// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/MXEVNSUB
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
    int n;
    cin >> n;

    // logic 1-> n sum even ans is n else n-1 2,3,,,n would be even
    int sum = (n * (n + 1)) / 2;
    if (sum % 2 == 0)
      cout << n << endl;
    else
      cout << n - 1 << endl;
  }

  return 0;
}