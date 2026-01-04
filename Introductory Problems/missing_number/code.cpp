#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128_t;
using u128 = __uint128_t;

#define all(x) (x).begin(), (x).end()

void solve() {
    i64 n;
    cin >> n;
    i64 x = 0;
    for (int i = 0; i < n - 1; ++i) {
        int cur;
        cin >> cur;
        x ^= cur ^ (i + 1);
    }
    x ^= n;
    cout << x << '\n';
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