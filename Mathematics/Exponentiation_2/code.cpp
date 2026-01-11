#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128_t;
using u128 = __uint128_t;

#define all(x) (x).begin(), (x).end()

constexpr i64 mod = (int)1e9 + 7;
constexpr i64 mod_exp = mod - 1;

i64 pow(i64 x, i64 y, i64 m) {
    i64 ans = 1;
    while (y) {
        if (y & 1) {
            ans = (ans * x) % m;
        }
        x = (x * x) % m;
        y >>= 1;
    }
    return ans;
}

void solve() {
    i64 a, b, c;
    cin >> a >> b >> c;    
    cout << pow(a, pow(b, c, mod_exp), mod) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}