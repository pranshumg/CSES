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
    cout << n << ' ';
    while (n != 1) {
        if (n & 1) {
            cout << n * 3 + 1 << ' ';
            n = n * 3 + 1;
        } else {
            cout << (n >> 1) << ' ';
            n >>= 1;
        }
    }
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