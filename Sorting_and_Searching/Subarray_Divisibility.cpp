#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int64_t> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    map<int, int> mp;
    ++mp[0];
    int64_t ans = 0, sum = 0;
    for (auto& a : v) {
        sum += a;
        int rem = ((sum % n) + n) % n;
        ans += mp[rem];
        ++mp[rem];
    }
    cout << ans << '\n';
    return 0;
}