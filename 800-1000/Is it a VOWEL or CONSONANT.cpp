// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/VOWELTB
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

  unordered_set<char> st = {'A', 'E', 'I', 'O', 'U'};
  char c;
  cin >> c;
  if (st.find(c) == st.end())
    cout << "Consonant" << endl;
  else
    cout << "Vowel" << endl;
  return 0;
}