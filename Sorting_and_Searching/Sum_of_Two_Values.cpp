#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    i64 n, x;
    cin >> n >> x;
    vector<i64> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    map<i64, int> mp;
    for (int i = 0; i < n; i++) {
        if (mp.find(x - v[i]) != mp.end()) {
            cout << mp[x - v[i]] << ' ' << i + 1 << '\n';
            return 0;
        }
        mp[v[i]] = i + 1;
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}