// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1400/problems/VACCINE2
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];
#define endl "\n"
#define pb push_back
#define YES cout << "YES\n"
#define NO cout << "NO\n"
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
    int n, d;
    cin >> n >> d;
    vi(n);
    // Age >=80 || age<=9 at risk
    // Two category oen risk and one non-risk at one day onky one type of these
    // can get vaccinated -> d people per day
    int risk = 0;
    for (auto &x : v) {
      if (x >= 80 || x <= 9) {
        risk++;
      }
    }
    int nonrisk = n - risk;
    int days = (risk + d - 1) / d + (nonrisk + d - 1) / d;
    cout << days << endl;
  }
  return 0;
}