// https://www.codechef.com/practice/course/1to2stars/LP1TO203/problems/SNAKPROC
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
    // cnt of head =cnt of tail and also after every head a tail should come
    int l;
    cin >> l;
    string s;
    cin >> s;
    int cnt_head = 0, cnt_tail = 0;
    bool last_head = false;
    bool ans = true;

    for (int i = 0; i < l; i++) {
      if (s[i] == '.')
        continue;
      else if (s[i] == 'H' && last_head == false) {
        cnt_head++;
        last_head = true;
      } else if (s[i] == 'T' && last_head == true) {
        cnt_tail++;
        last_head = false;
      } else {
        ans = false;
        break;
      }
    }

    if (cnt_head == cnt_tail && ans)
      cout << "Valid" << endl;
    else
      cout << "Invalid" << endl;

    /*

     int balance = 0;
    bool valid = true;
    for (char c : s) {
    if (c == 'H') {
      balance++;
      if (balance > 1) {
        valid = false;
        break;
      }
    } else if (c == 'T') {
      balance--;
      if (balance < 0) {
        valid = false;
        break;
      }
    }
  }

  if (balance != 0)
    valid = false;

  cout << (valid ? "Valid\n" : "Invalid\n");
  */
  }

  return 0;
}