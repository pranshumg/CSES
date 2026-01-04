#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128_t;
using u128 = __uint128_t;

#define all(x) (x).begin(), (x).end()

string dec_to_bin(int g, int n) {
    string s = "";
    while (g) {
        s = to_string(g % 2) + s;
        g >>= 1;
    }
    while ((int)s.size() < n) {
        s = '0' + s;
    }
    return s;
}

int g(int n) {
    return n ^ (n >> 1);
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < (1 << n); ++i) {
        cout << dec_to_bin(g(i), n) << '\n';
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