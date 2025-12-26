// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PRIME1

// Segmented Sieve Imp Concept
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

vector<int> sieve(int n) {
  vector<int> p(n + 1, 1);
  vector<int> ans;
  for (int i = 2; i <= n; i++) {
    if (p[i] == 1) {
      ans.push_back(i);
      for (int j = i * i; j <= n; j += i) {
        p[j] = 0;
      }
    }
  }
  return ans;
}
void segmentedSieve(int a, int b) {
  // 1. Find root of b
  int rootb = sqrt(b);
  // 2.Get prime till rootb using sieve
  vector<int> primes = sieve(rootb);
  vector<bool> arr(b - a + 1, true);
  // 3. Marking using Prime
  for (int &prime : primes) {
    // Find starting ind for marking
    int multiple = (a + prime - 1) / prime;
    if (multiple == 1)
      multiple++;

    int startind = prime * multiple - a;
    for (size_t j = startind; j < arr.size(); j += prime) {
      arr[j] = false;
    }
  }
  for (int i = a; i <= b; i++) {
    if (i > 1 && arr[i - a] == true) {
      cout << i << endl;
    }
  }
}
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  testcases {
    int a, b;
    cin >> a >> b;
    // constraint is large need to use segmented sieve
    segmentedSieve(a, b);
    cout << endl;
  }
  return 0;
}