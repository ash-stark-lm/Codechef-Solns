// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/PALL01
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

bool palindrome(int x) {
  int rev = 0;
  int temp = x;
  while (temp > 0) {
    int rem = temp % 10;
    rev = rev * 10 + rem;
    temp = temp / 10;
  }
  return rev == x;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {
    int n;
    cin >> n;

    cout << (palindrome(n) ? "Wins" : "Loses") << endl;
  }

  return 0;
}