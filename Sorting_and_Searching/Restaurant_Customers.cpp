#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        v.emplace_back(a, 1);
        v.emplace_back(b, -1);
    }
    sort(v.begin(), v.end(), [](auto a, auto b) {
        return a < b;
    });
    int ans = 0, cnt = 0;
    for (auto& it : v) {
        if (it.second == 1) ++cnt;
        else --cnt;
        ans = max(ans, cnt);
    }
    cout << ans << '\n';
    return 0;
}