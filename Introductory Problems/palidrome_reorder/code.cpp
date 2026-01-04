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
    map<char, int> mp;
    for (auto &it : s) {
        ++mp[it];
    }
    string r = "", t = "";
    int o = 0;
    char c;
    for (auto &it : mp) {
        r += string(it.second >> 1, it.first);
        t += string(it.second >> 1, it.first);
        if (it.second & 1) {
            c = it.first;
            ++o;
        } 
    }
    if (((int)s.size() & 1 && o != 1) || ((int)s.size() % 2 == 0 && o)) {
        cout << "NO SOLUTION\n";
        return;
    }
    reverse(all(t));
    cout << r;
    if ((int)s.size() & 1) {
        cout << c;
    }
    cout << t << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}