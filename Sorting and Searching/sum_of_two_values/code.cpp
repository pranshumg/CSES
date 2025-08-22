/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        if (mp.find(x - v[i]) != mp.end()) {
            cout << mp[x - v[i]] << ' ' << i + 1;
            return;
        }
        mp[v[i]] = i + 1;
    }
    cout << "IMPOSSIBLE";   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tests;
    // cin >> tests;
    // while (tests--) {
        run_case();
    // }
    return 0;
}