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
        if (i > 0 && v[i] == v[i - 1]) continue;
        for (int j = i + 1; j < n; j++) {
            if (v[j] == v[j - 1]) continue;
            int k = j + 1, l = n - 1;
            while (k < l) {
                i64 sum = v[i].first + v[j].first + v[k].first + v[l].first;
                if (sum == x) {
                    cout << v[i].second << ' ' << v[j].second << ' ' << v[k].second << ' ' << v[l].second << '\n';
                    return 0;
                } else if (sum < x) {
                    k++;
                    while (k < l && v[k] == v[k - 1]) k++;
                } else {
                    l--;
                    while (k < l && v[l] == v[l + 1]) l--;
                }
            }
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}