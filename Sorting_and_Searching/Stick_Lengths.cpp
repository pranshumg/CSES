#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int64_t> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int64_t med = v[n / 2];
  int64_t ans = 0;
  for (int64_t i : v) ans += abs(med - i);
  cout << ans << '\n';
  return 0;
}