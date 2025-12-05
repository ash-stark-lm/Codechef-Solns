// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINFLIPS
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
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  testcases {
    int n;
    cin >> n;
    vi(n);

    if (n % 2 != 0) {
      cout << -1 << endl;
      continue;
    }

    // int cnt_pos = 0;
    // fo(i, n) {
    //   if (v[i] == 1)
    //     cnt_pos++;
    // }
    // int cnt_neg = n - cnt_pos;
    // int req = min(abs(cnt_pos - n/2), abs(cnt_neg - n/2));
    // cout << req << endl;

    // 1 flip changes sum by 2 curr sum=s we need 0  1 flip 2 su change so ttoal
    // ans abs(sum)/2
    int sum = 0;
    fo(i, n) { sum += v[i]; }
    int req = abs(sum) / 2;
    cout << req << endl;
  }

  return 0;
}