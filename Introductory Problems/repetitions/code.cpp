#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128_t;
using u128 = __uint128_t;

#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin >> s;
    int ans = 1, cnt = 1;
    for (int i = 1; i < (int)s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            ++cnt;
        } else {
            cnt = 1;
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