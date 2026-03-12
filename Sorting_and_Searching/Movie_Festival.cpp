//    author:  Pranshu Gupta
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end(), [](auto a, auto b) {
    return a.second < b.second;
  });
  int f = 0;
  int ans = 0;
  for (auto &it : v) {
    if (it.first >= f) {
      ++ans;
      f = it.second;
    }
  }
  cout << ans << '\n';
  return 0;
}