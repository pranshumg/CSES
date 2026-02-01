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
    vector<int> s(n), d(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i] >> d[i];
    }
    sort(all(s));
    sort(all(d));
    int cnt = 0, ans = 0, i = 0, j = 0;
    while (i < n) {
        if (s[i] <= d[j]) {
            ++cnt, ++i;
        } else {
            --cnt, ++j;
        }
        ans = max(ans, cnt);
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