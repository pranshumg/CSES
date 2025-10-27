/**
 *    author:  pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

#define MOD (int)1e9 + 7

void run_case() {
  int n;
  cin >> n;
  int ans = 1;
  for (int i = 0; i < n; ++i) {
    ans *= 2;
    ans %= MOD;
  }
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  run_case();
  return 0;
}