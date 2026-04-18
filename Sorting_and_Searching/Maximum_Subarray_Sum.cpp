#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int64_t> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int64_t ans = -1e9, sum = 0;
    for (int64_t i : v) {
        if (sum + i < i) sum = i;
        else sum += i;
        ans = max(ans, sum);
    }
    cout << ans << '\n';
    return 0;
}