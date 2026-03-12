//    author:  Pranshu Gupta
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  vector<string> res;
  do {
    res.emplace_back(s);
  } while (next_permutation(s.begin(), s.end()));
  cout << int(res.size()) << '\n';
  for (auto& it : res) {
    cout << it << '\n';
  }
  return 0;
}