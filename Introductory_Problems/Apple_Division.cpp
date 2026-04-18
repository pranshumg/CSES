#include <bits/stdc++.h>

using namespace std;

#ifdef PRANSHU_DEBUG
#include "debug.h"
#else
#define dbg(...) 24
#endif

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int64_t> v(n);
    int64_t total = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        total += v[i];
    }   
    int64_t ans = LLONG_MAX;
    for (int mask = 0; mask < (1 << n); ++mask) {
        int64_t sum = 0;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                sum += v[i];
            }
        }
        ans = min(ans, abs(total - 2 * sum));
    }
    cout << ans << '\n';
    return 0;
}