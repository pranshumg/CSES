#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int64_t a, b;
    cin >> a >> b;
    cout << ((a + b) % 3 == 0 && abs(a - b) <= min(a, b) ? "YES" : "NO") << '\n';
  }
  return 0;
}