//    author:  Pranshu Gupta
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int64_t n;
  cin >> n;
  int64_t xr = 0;
  for (int i = 0; i < n - 1; ++i) {
    int cur;
    cin >> cur;
    xr ^= cur ^ (i + 1);
  }
  xr ^= n;
  cout << xr << '\n';
  return 0;
}