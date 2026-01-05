#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128_t;
using u128 = __uint128_t;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n, m;
    cin >> n >> m;
    i64 k;
    cin >> k;
    vector<i64> a(n), b(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    sort(all(a));
    sort(all(b));
    int l = 0, r = 0, ans = 0;
    while (l < n && r < m) {
        if (abs(a[l] - b[r]) <= k) {
            ++ans, ++l, ++r;
        } else if (b[r] - k > a[l]) {
            ++l;
        } else {
            ++r;
        }
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