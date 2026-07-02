#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> board(8);
    for (int i = 0; i < 8; i++) {
        cin >> board[i];
    }
    auto is_possible = [&](int row, int col) -> bool {
        for (int i = 0; i <= col; i++) {
            if (board[row][i] == 'Q') {
                return false;
            }
        }
        int dup_row = row, dup_col = col;
        while (row >= 0 && col >= 0) {
            if (board[row][col] == 'Q') {
                return false;
            }        
            row--;
            col--;
        }
        row = dup_row, col = dup_col;
        while (row < 8 && col >= 0) {
            if (board[row][col] == 'Q') {
                return false;
            }
            row++;
            col--;
        }
        return true;
    };
    int ans = 0;
    auto solve = [&](auto&& self, int col) -> void {
        if (col == 8) {
            ans++;
            return;
        }
        for (int row = 0; row < 8; row++) {
            if (board[row][col] == '.' && is_possible(row, col)) {
                board[row][col] = 'Q';
                self(self, col + 1);
                board[row][col] = '.';
            }
        }
    };
    solve(solve, 0);
    cout << ans << '\n';
    return 0;
}