/**
 *    author:  pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
  int64_t a, b;
  cin >> a >> b;
  if (a < b) {
    swap(a, b);
  }
  if ((a + b) % 3 == 0 && a <= b * 2) {
    cout << "YES\n";
    return;
  }
  cout << "NO\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests;
  cin >> tests;
  while (tests--) {
    run_case();
  }
  return 0;
}