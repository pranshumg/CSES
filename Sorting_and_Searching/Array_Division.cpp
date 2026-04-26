#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int64_t> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int64_t low = 0, high = 0;
    for (auto& a : v) {
        low = max(low, a);
        high += a;
    }
    while (low <= high) {
        int64_t mid = low + (high - low) / 2;
        int64_t sum = 0;
        int cnt = 1;
        for (auto& a : v) {
            if (sum + a > mid) {
                ++cnt;
                sum = a;
            } else {
                sum += a;
            }
        }
        if (cnt <= k) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << low << '\n';
    return 0;
}