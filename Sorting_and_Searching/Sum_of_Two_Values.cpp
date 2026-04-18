#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int64_t n, x;
    cin >> n >> x;
    vector<int64_t> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    map<int64_t, int> mp;
    for (int i = 0; i < n; ++i) {
        if (mp.find(x - v[i]) != mp.end()) {
            cout << mp[x - v[i]] << ' ' << i + 1 << '\n';
            return 0;
        }
        mp[v[i]] = i + 1;
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}