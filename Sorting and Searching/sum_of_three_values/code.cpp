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
    vector<pair<i64, int>> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(all(v));
    for (int i = 0; i < n; ++i) {
        int j = i + 1, k = n - 1;
        while (j < k) {
            i64 sum = v[i].first + v[j].first + v[k].first;
            if (sum == x) {
                cout << v[i].second << ' ' << v[j].second << ' ' << v[k].second << '\n';
                return;
            } else if (sum < x) {
                ++j;
            } else {
                --k;
            }
        }
    }
    cout << "IMPOSSIBLE\n";
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