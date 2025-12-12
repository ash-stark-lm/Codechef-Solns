// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/HOWMANY
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

  int n;
  cin >> n;

  int digits = 0;
  while (n > 0) {
    digits++;
    n /= 10;
  }
  if (digits <= 3)
    cout << digits << endl;
  else
    cout << "More than 3 digits" << endl;
  return 0;
}