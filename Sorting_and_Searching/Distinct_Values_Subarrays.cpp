#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }        
    int64_t ans = 0;
    map<int, int> mp;
    int l = 0;
    for (int r = 0; r < n; ++r) {
        ++mp[v[r]];
        while (int(mp.size()) < r - l + 1) {
            --mp[v[l]];
            if (!mp[v[l]]) mp.erase(v[l]);
            ++l;
        }
        ans += int(mp.size());
    }
    cout << ans << '\n';
    return 0;
}