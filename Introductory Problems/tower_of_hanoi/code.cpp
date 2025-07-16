/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void move(int n, int left, int right, int middle) {
    if (n == 1) {
        cout << left << " " << right << '\n'; 
        return;
    }
    move(n - 1, left, middle, right);
    cout << left << " " << right << '\n';
    move(n - 1, middle, right, left);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << '\n';
    move(n, 1, 3, 2);
    return 0;
}