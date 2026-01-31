#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128_t;
using u128 = __uint128_t;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n, x;
    cin >> n >> x;
    vector<i64> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    map<i64, int> mp;
    ++mp[0];
    i64 sum = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
        sum += v[i];
        ans += mp[sum - x];
        ++mp[sum];
    }
    cout << ans << '\n';
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