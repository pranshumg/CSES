//    author:  Pranshu Gupta
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; ++i) {
    int cur;
    cin >> cur;
    mp[cur] = i;
  }
  int ans = 1;
  for (int i = 2; i <= n; ++i) {
    if (mp[i] < mp[i - 1]) ++ans;
  }
  cout << ans << '\n';
  return 0;
}