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
  int64_t sum = 1;
  for (int64_t i : v) {
    if (sum < i) break;
    sum += i;
  }
  cout << sum << '\n';
  return 0;
}