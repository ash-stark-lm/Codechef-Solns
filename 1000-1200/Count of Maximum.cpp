// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/MAXCOUNT
#define fo(i, n) for (int i = 0; i < n; i++)

class Solution {
public:
  pair<int, int> mostFrequent(vector<int> &v) {
    // write your code here
    unordered_map<int, int> mp;
    int n = v.size();
    fo(i, n) { mp[v[i]]++; }

    pair<int, int> ans;
    ans.first = -1;
    ans.second = -1;

    for (auto &x : mp) {
      if (x.second > ans.second) {
        ans.first = x.first;
        ans.second = x.second;
      } else if (x.second == ans.second && x.first < ans.first) {
        ans.first = x.first;
        ans.second = x.second;
      }
    }

    return ans;
  }
};
