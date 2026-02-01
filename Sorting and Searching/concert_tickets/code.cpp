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
    multiset<int> ms;
    for (int i = 0; i < n; ++i) {
        int cur;
        cin >> cur;
        ms.insert(cur);
    }
    while (m--) {
        int cur;
        cin >> cur;
        auto it = ms.upper_bound(cur);
        if (it == ms.begin()) {
            cout << -1 << '\n';
        } else {
            --it;
            cout << *it << '\n';
            ms.erase(it);
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