#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), [](auto a, auto b) {
        return a.second < b.second;
    });
    int ans = 0, prev = 0;
    for (auto& [start, end]: v) {
        if (start >= prev) {
            ans++;
            prev = end;
        }
    }
    cout << ans << '\n';
    return 0;
}