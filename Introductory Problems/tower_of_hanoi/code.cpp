#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128_t;
using u128 = __uint128_t;

#define all(x) (x).begin(), (x).end()

void move(int n, int l, int r, int m) {
    if (n == 1) {
        cout << l << " " << r << '\n'; 
        return;
    }
    move(n - 1, l, m, r);
    cout << l << " " << r << '\n';
    move(n - 1, m, r, l);
}

void solve() {
    int n;
    cin >> n;
    cout << (1 << n) - 1 << '\n';
    move(n, 1, 3, 2);
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