#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    multiset<int> mst;
    for (int i = 0; i < n; i++) {
        int cur;
        cin >> cur;
        mst.insert(cur);
    }
    while (m--) {
        int cur;
        cin >> cur;
        auto it = mst.upper_bound(cur);
        if (it == mst.begin()) cout << -1 << '\n';
        else {
            --it;
            cout << *it << '\n';
            mst.erase(it);
        }
    }
    return 0;
}