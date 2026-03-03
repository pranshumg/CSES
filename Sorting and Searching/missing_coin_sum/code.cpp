#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128_t;
using u128 = __uint128_t;

void solve() {
    int n;
    cin >> n;
    vector<i64> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    i64 ans = 1;
    for (auto& it : v) {
        if (it > ans) break;
        else ans += it;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}