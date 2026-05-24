#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<i64> v(n);
    i64 total = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        total += v[i];
    }
    i64 ans = LLONG_MAX;
    for (int mask = 0; mask < (1 << n); mask++) {
        i64 sum = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum += v[i];
            }
        }
        ans = min(ans, abs(total - 2 * sum));
    }
    cout << ans << '\n';
    return 0;
}