// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/JOINING
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

    int n, k;
    cin >> n >> k;

    // impact can be counted as the bucket in which cnadiate is leaving and the
    // bucket after that will have impact we can take the differnce

    int b = (k + 5 - 1) / 5;

    int tot_grp = (n + 5 - 1) / 5;
    cout << tot_grp - b << endl;
  }

  return 0;
}