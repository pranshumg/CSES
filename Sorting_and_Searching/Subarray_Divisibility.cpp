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
    map<int, int> mp;
    mp[0]++;
    i64 ans = 0, sum = 0;
    for (auto& a : v) {
        sum += a;
        int rem = ((sum % n) + n) % n;
        ans += mp[rem];
        mp[rem]++;
    }
    cout << ans << '\n';
    return 0;
}