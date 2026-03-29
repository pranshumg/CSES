#include <bits/stdc++.h>
 
using namespace std;
 
int g(int n) {
  return n ^ (n >> 1);
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  auto Bin = [](int g, int n) -> string {
    string res = "";
    while (g) {
      res += g % 2 ? '1' : '0';
      g >>= 1;
    }
    reverse(res.begin(), res.end());
    while (int(res.size()) < n) res = '0' + res;
    return res;
  };
  int n;
  cin >> n;
  for (int i = 0; i < (1 << n); ++i) {
    cout << Bin(g(i), n) << '\n';
  }
  return 0;
}