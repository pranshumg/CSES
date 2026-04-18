#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    map<int, int> mp;
    int l = 0;
    for (int r = 0; r < n; ++r) {
        while (r - l + 1 > k) {
            --mp[v[l]];
            if (mp[v[l]] == 0) mp.erase(v[l]);
            ++l;
        }
        ++mp[v[r]];
        if (r - l + 1 == k) {
            cout << int(mp.size()) << ' ';
        }
    }
    cout << '\n';
    return 0;
}