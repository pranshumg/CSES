#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  const int mx = 1e6;
  int n;
  cin >> n;
  vector<int> v(n), freq(mx + 1, 0);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
    ++freq[v[i]];
  }
  for (int d = mx; d >= 1; --d) {
    int cnt = 0;
    for (int m = d; m <= mx; m += d) {
      cnt += freq[m];
    }
    if (cnt > 1) {
      cout << d << '\n';
      return 0;
    } 
  }
  return 0;
}