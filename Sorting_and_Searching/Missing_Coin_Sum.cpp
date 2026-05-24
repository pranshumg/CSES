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
    sort(v.begin(), v.end());
    i64 sum = 1;
    for (auto& a : v) {
        if (sum < a) break;
        sum += a;
    }
    cout << sum << '\n';
    return 0;
}