/**
 *    author:  pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

string dec_to_bin(int gray, int n) {
  string b;
  while (gray > 0) {
    int rem = gray % 2;
    b = to_string(rem) + b;
    gray /= 2;
  }
  while ((int)b.size() < n) {
    b = '0' + b; 
  }
  return b;
}

int g(int n) {
  return n ^ (n >> 1);
}

void run_case() {
  int n;
  cin >> n;
  int total = 1 << n;
  for (int i = 0; i < total; ++i) {
    cout << dec_to_bin(g(i), n) << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // int tests;
  // cin >> tests;
  // while (tests--) {
    run_case();
  // }
  return 0;
}