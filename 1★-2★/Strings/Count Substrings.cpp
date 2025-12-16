// https://www.codechef.com/practice/course/1to2stars/LP1TO203/problems/CSUB
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

    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '1')
        cnt++;
    }

    // total substring ==> firstly k for each 1 is a substring in its own
    // for differnt indexed 1 we can choose 2 => kc2=> k*(k-1)/2
    // total possible = k+k*(k-1)/2
    cout << cnt * (cnt + 1) / 2 << endl;
  }

  return 0;
}