#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    vector<i64> v(n);
    for (auto& a : v) {
        cin >> a;
    }
    auto check = [&](i64 mid) -> bool {
        i64 cnt = 0;
        for (auto& a : v) {
            cnt += mid / a;
        }
        return cnt >= t;
    };
    int mn = *min_element(v.begin(), v.end());
    i64 low = mn, high = i64(mn) * t;
    while (low <= high) {
        i64 mid = low + (high - low) / 2;
        if (check(mid)) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    } 
    cout << low << '\n';
    return 0;
}