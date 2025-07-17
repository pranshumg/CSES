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
    vector<int> v(n), temp(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    temp = v;
    sort(temp.begin(), temp.end());
    int i = 0, j = n - 1, el1 = -1, el2 = -1;
    while (i < j) {
        if (temp[i] + temp[j] == x) {
            el1 = temp[i], el2 = temp[j];
            break;
        } else if (temp[i] + temp[j] > x) {
            j--;
        } else {
            i++;
        }
    }
    if (el1 == -1 || el2 == -1) {
        cout << "IMPOSSIBLE";
    } else {
        auto it1 = find(v.begin(), v.end(), el1);
        auto it2 = find(v.rbegin(), v.rend(), el2);
        int idx1 = (it1 - v.begin()) + 1, idx2 = n - distance(v.rbegin(), it2);
        if (idx1 > idx2) {
            swap(idx1, idx2);
        }
        cout << idx1 << " " << idx2;
    }
    return 0;
}