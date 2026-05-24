#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    i64 n, x;
    cin >> n >> x;
    vector<pair<i64, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if (i > 0 && v[i].first == v[i - 1].first) continue;
        int j = i + 1, k = n - 1;
        while (j < k) {
            i64 sum = v[i].first + v[j].first + v[k].first;
            if (sum == x) {
                cout << v[i].second << ' ' << v[j].second << ' ' << v[k].second << '\n';
                return 0;
            } else if (sum < x) {
                j++;
                while (j < k && v[j].first == v[j - 1].first) j++;
            } else {
                k--;
                while (j < k && v[k].first == v[k + 1].first) k--;
            }
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}