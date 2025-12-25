// https://www.codechef.com/practice/course/1to2stars/LP1TO205/problems/EVENSPLIT
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

#define sortinc(v) sort(v.begin(), v.end())
#define sortdec(v) sort(v.rbegin(), v.rend());

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {

    int n;
    cin >> n;

    string s;
    cin >> s;
    if (s.size() <= 2) {
      cout << s << endl;
      continue;
    }

    int i = 0, j = s.size() - 1;
    while (i < j) {
      if (s[i] == '0')
        i++;
      else if (s[j] == '1')
        j--;
      else {
        swap(s[i], s[j]);
        i++;
        j--;
      }
    }
    cout << s << endl;
  }

  return 0;
}