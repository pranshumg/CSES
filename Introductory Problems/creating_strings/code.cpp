#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128_t;
using u128 = __uint128_t;

#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin >> s;
    sort(all(s));
    vector<string> ans;
    int k = 0;
    do {
        ++k;
        ans.emplace_back(s);
    } while (next_permutation(all(s)));
    cout << k << '\n';
    for (auto &it : ans) {
        cout << it << '\n';
    } 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}