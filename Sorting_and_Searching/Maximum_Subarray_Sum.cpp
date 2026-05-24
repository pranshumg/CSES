#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<i64> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    i64 ans = -1e9, sum = 0;
    for (auto& a : v) {
        if (sum + a < a) sum = a;
        else sum += a;
        ans = max(ans, sum);
    }
    cout << ans << '\n';
    return 0;
}