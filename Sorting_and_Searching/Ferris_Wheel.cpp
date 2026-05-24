#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    i64 n, x;
    cin >> n >> x;
    vector<i64> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int i = 0, j = n - 1;
    int ans = 0;
    while (i <= j) {
        if (v[i] + v[j] <= x) {
            i++;
        }
        j--;
        ans++;
    }
    cout << ans << '\n';
    return 0;
}