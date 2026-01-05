#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128_t;
using u128 = __uint128_t;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    i64 x;
    cin >> x;
    vector<i64> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    map<i64, int> mp;
    for (int i = 0; i < n; ++i) {
        if (mp.find(x - v[i]) != mp.end()) {
            cout << mp[x - v[i]] << ' ' << i + 1 << '\n';
            return;
        }
        mp[v[i]] = i + 1;
    }
    cout << "IMPOSSIBLE\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}