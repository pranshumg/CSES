#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int l = 0;
    int ans = 0;
    map<int, int> mp;
    for (int r = 0; r < n; ++r) {
        while (l < r && mp.find(v[r]) != mp.end()) {
            mp.erase(v[l++]);
        }
        ++mp[v[r]];
        ans = max(ans, int(mp.size()));
    }
    cout << ans << '\n';
    return 0;
}