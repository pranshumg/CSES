//    Author:  Pranshu Gupta
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int l = 0;
  int ans = 0;
  for (int r = 0; r < int(s.size()); ++r) {
    if (s[l] != s[r]) {
      l = r;
    }
    ans = max(ans, r - l + 1);
  }
  cout << ans << '\n';
  return 0;
}