//    author:  Pranshu Gupta
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
  sort(v.begin(), v.end());
  int i = 0, j = n - 1;
  int ans = 0;
  while (i <= j) {
    if (v[i] + v[j] <= x) {
      ++i;
    }
    --j;
    ++ans;
  }
  cout << ans << '\n';
  return 0;
}