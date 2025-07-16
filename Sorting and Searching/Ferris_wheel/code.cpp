/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = 0, i = 0, j = n - 1;
    while (i <= j) {
        if (v[i] + v[j] <= x) {
            i++;
        }
        j--;
        ans++;
    }
    cout << ans;
    return 0;
}