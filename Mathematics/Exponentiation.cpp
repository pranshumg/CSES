#include <bits/stdc++.h>
 
using namespace std;
 
const int md = int(1e9) + 7;
 
int main() {
  ios::sync_with_stdio(false); 
  cin.tie(nullptr);
  int n;
  cin >> n;
  while (n--) {
    auto pow = [](int64_t a, int b) -> int {
      int64_t ans = 1;
      while (b) {
        if (b & 1) {
          ans = (ans * a) % md;
        }
        a = (a * a) % md;
        b >>= 1;
      }
      return ans;
    };
    int a, b;
    cin >> a >> b;
    cout << pow(a, b) << '\n';
  }
  return 0;
}