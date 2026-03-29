#include <bits/stdc++.h>
 
using namespace std;
 
const int md = int(1e9) + 7;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int ans = 1;
  for (int i = 0; i < n; ++i) {
    ans <<= 1;
    ans %= md;
  }
  cout << ans << '\n';
  return 0;
}