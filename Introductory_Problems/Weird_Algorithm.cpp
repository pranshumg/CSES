//    author:  Pranshu Gupta
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int64_t n;
  cin >> n;
  cout << n << ' ';
  while (n > 1) {
    if (n & 1) n = n * 3 + 1;
    else n >>= 1;
    cout << n << ' ';
  } 
  cout << '\n';
  return 0;
}