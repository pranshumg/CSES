#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int64_t n, x;
  cin >> n >> x;
  vector<int64_t> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }
  map<int64_t, int> mp;
  ++mp[0];
  int64_t sum = 0;
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    sum += v[i];
    ans += mp[sum - x];
    ++mp[sum];
  }
  cout << ans << '\n';
  return 0;
}