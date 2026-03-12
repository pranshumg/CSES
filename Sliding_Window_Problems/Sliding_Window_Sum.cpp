//    author:  Pranshu Gupta
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  int x, a, b, c;
  cin >> x >> a >> b >> c;
  vector<int> v(n);
  v[0] = x;
  for (int i = 1; i < n; ++i) {
    v[i] = (int64_t(a) * v[i - 1] + b) % c;
  }
  int64_t ans = 0, sum = 0;
  int l = 0;
  for (int r = 0; r < n; ++r) {
    while (r - l + 1 > k) {
      sum -= v[l++];
    }
    sum += v[r];
    if (r - l + 1 == k) {
      ans ^= sum;
    }
  }
  cout << ans << '\n';
  return 0;
}