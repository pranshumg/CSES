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
    map<i64, int> mp;
    mp[0]++;
    i64 sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        ans += mp[sum - x];
        mp[sum]++;
    }
    cout << ans << '\n';
    return 0;
}