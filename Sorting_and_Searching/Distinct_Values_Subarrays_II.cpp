#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    i64 ans = 0;
    map<int, int> mp;
    int l = 0;
    for (int r = 0; r < n; r++) {
        mp[v[r]]++;
        while (int(mp.size()) > k) {
            mp[v[l]]--;
            if (!mp[v[l]]) mp.erase(v[l]);
            l++;
        }
        ans += r - l + 1;
    }
    cout << ans << '\n';
    return 0;
}